

def trick():
    print("trick module")
trick()

def soma(x,y):
    return x+y
    print("Soma retorna "+str(x+y)) 
soma(2,6)

def mult(x,y):
    #print(x*y)
    return x*y
mult(soma(2,6),2)