#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    float n = 0.0;
    
    while(1){
    fflush(stdin);
    scanf("%f",&n);
    printf("r: %.2f\n",n*(n*((n*n*n)/2)));
    }
    
}
          