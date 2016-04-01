#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct agenda{
	char *nome;
	char *email;
	
}AG;


int main(int argc, char *argv[]){
	char nome[1000];
	int n;
	printf("nome:");
	AG *ag = (AG*) malloc(sizeof(AG*));
	gets(nome);
	ag->nome = nome;
	n = strlen(nome);
    nome[n] = ag->nome;
	
	printf("%s    %d",ag->nome,strlen(nome));
	
	free(ag);
	return 0;
}