#include <stdio.h>
#include <stdlib.h>

typedef struct tango{
  int id;
  char nome[30];
  int idade;
  float salario;
 }TANGO;
 
TANGO insere(TANGO user[], int id);
 
void exibe(TANGO user[], int id);

int soma( int *x,int y){
   
   int z = *x+y;
   
   return z;
   
}

int main(void){
   
   int i;
   
   TANGO user[2];
   
   //alpiste = 60;
   for (i = 0; i < 2; i++){
       insere(user,i);
       system("clear");
   }
   for (i = 0; i < 2; i++){
       exibe(user,i);
   }
   
  // printf("\nola %d", soma(&alpiste,3));
   
}

TANGO insere(TANGO user[], int id){
   printf("ID     :");
   scanf("%d",&user[id].id);
   getchar();
   printf("NOME   :");
   fgets(user[id].nome,30,stdin);
   printf("IDADE  :");
   scanf("%d",&user[id].idade);
   printf("SALARIO:");
   scanf("%f",&user[id].salario);
   
   return user[id];
   
   
}

void exibe(TANGO user[], int id){
    printf("\n+------------------------------------+");
    printf("\n|ID     : %d\n",user[id].id);
    printf("|NOME   : %s",user[id].nome);
    printf("|IDADE  : %d\n",user[id].idade);
    printf("|SALARIO: R$%.2f\n",user[id].salario);
    printf("+------------------------------------+");
 
  }