#include <stdio.h>
#include <stdlib.h>


int iterativaRegressiva(int n);
int recursivaRegressiva(int n);

int main(){
   int I, n,R;
   
   printf("digite n: ");
   scanf("%d",&n);

printf("\ninterativa");
iterativaRegressiva(n);
//printf("\n%d",I);
printf("\nrecursiva");
recursivaRegressiva(n);
//printf("\n%d",R);
return 0;   
   
}


int iterativaRegressiva(int n){
   int i;
   for(i = n; i >= 0; i--){
      printf("\n%d", i);
   }
}
int recursivaRegressiva(int n){
   int w;
   
    printf("\n%d",n);
   if ( n == 0){
      return 0;
   }
  w = (recursivaRegressiva(n - 1));
  //printf("\n%d",n);
  //return w;
   
}
/* int func(int n){
   if(n == 0){
      
      return 0;
      }
   return n + func( n - 1);
   
}

*/