#include <stdio.h>
#include <stdlib.h>

void main( void ){
    char *x;
    while (1){
    printf("pergunte:\n");
    *x = leitura(*x);
    
  
    printf("\n%s",x);
   
    }
    
   //system("pause");
   free(x);
   return 0;
    
}

char* leitura(char *str){
    
    str = (char*) malloc(sizeof(char));
    fflush(stdin);
    fgets(str,250,stdin);
    
    return str;
    
}