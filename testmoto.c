#include <stdio.h>
#include <stdlib.h>

int main ( void ){  
   int a , i , b;

   a = 2;
   b = 5;
   for (i = 0;i < 10;i++){ 
       printf(" %d %d\n ",a*b+i,i);
   }

   return 0;

}
