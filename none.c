#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n = 0,i,j,cont = 0;
    int m[3][3];
    
    for(j = 0; j < 3;j++){ 

        for(i= 0; i < 3;i++){ 

            if(i != 1){
                printf("%d\t",m[i][j] = 0);
            }else{
                if(i == 1){
             	    cont++;
             	    if(cont == 2){
             		    printf("%d\t",m[i][j] = 0);
             	}else{
                     printf("%d\t",m[i][j] = 8);
             	}
             }
         }
    }
        printf("\n");
    }
    
	while( n<10){
	//printf("%d\n",n);
	n++;
	}
	return 0;
}