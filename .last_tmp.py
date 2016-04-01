#-*-coding:utf8;-*-
#qpy:2
#qpy:console 


import math
from math import *
import sys
from sys import *
	
fi = 1.61803398875 
#fi = (1+sqrt(5))/2 
   
def phima(x):
    #fi = (1+sqrt(5))/2 
    x = x * fi
    return x
def phimi(x):
    #fi = (1+sqrt(5))/2 
    x = x * (fi - 1)
    return x 
def phiarredon(x):  
    if(x % 1 < 0.6):
        return int(x) 
    else:
        return int(x)+1

def parada(x):
    if(int(x) == 0):
        exit()
    
p = 1.0
while(p != 0):
    print("0 para sair")
    print("calculo de proporção:")
    p = float(raw_input())
    
    parada(p)
    print("1 inteiro")
    print("2 flutante")
    op = raw_input()
    if(int(op) == 1):
        print("min: ")
        print(phiarredon(phimi(p)))
        print("max: ")
        print(phiarredon(phima(p))) 
    elif(int(op) == 2):
        print("min: ")
        print((phimi(p)))
        print("max: ")
        print((phima(p))) 
    else:
        print("opção incorreta!")
    print("phi:")
    print(1.61803398875) 
    print("  ")