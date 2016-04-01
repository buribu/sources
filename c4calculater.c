#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float sum(int x, int y);
float sub(int x, int y);
float divi(int x, int y);
float mult(int x, int y);
float raiz(int x);

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
	int x, y,op,i;
	x = 1;
	

	
	while (x != 0)
	{
    printf("\n\n         Calculadora Aritmética\n\n");
	printf("1) Soma\n");
	printf("2) Subtração\n");
	printf("3) Divisão\n");
	printf("4) Multiplicação\n");
	printf("5) raiz quadrada\n\n");
	printf("Digite uma opção:");
	scanf("%d",&op);
	if(op == 5){
	printf("Digite um número\n");
		printf(":");
	   scanf("%d", &x);
	}else{
	printf("Digite dois números\n");
		printf(":");
	   scanf("%d", &x);
	   printf(":");
	   scanf("%d", &y);
	}
		if (x == 0)
		{
			return 0;
		}
		switch(op){
			case 1:
			
        printf("%.2f\n", sum(x, y)); 
                break;
            case 2:
            printf("%.2f\n", sub(x, y)); 
                break;
            case 3:
           printf("%.2f\n", divi(x, y)); 
                break; 
            case 4:
            printf("%.2f\n", mult(x, y)); 
                break;
             case 5:
                  printf("%.2f",raiz(x));
                  
                break;
            default:
            printf("opção incorreta!"); 
                
		}
		//#define ESC 27
        //printf( "%c[2J", ESC );
        sleep(2);
      //  for(i = 0; i < 22; i++){
       //     printf("\n");
       // }
	  }
    printf("none arguments!!"); 
    system("pause"); 
	return 0;
			   
}
			   
float sum(int x, int y)
{
    float z; 
			   
    z = x + y; 
			   
	 return z;
}
float sub(int x, int y)
{
    float z; 
			   
    z = x  - y; 
			   
	 return z;
}
float divi(int x, int y)
{
    float z; 
			   
    z = x / y; 
			   
	 return z;
}
float mult(int x, int y)
{
    float z; 
			   
    z = x * y; 
			   
	 return z;
}

float raiz(int x){
	return sqrt(x);
	
}
