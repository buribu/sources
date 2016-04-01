#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "almas.h"
#include "animal.h"


struct lis{
   int qtd;
   struct animal data[MAX];

};

lis *cria_lis(){
   lis *li;
   li = (lis*) malloc(sizeof(struct lis));
   if(li != NULL){
      li->qtd = 0;
   }
   return li;
}

void libera_lis(lis *li){
	free(li);
}

int tamanho_lis(lis *li){
	if(li == NULL){
		return -1;
	}else{
		return li->qtd;
	}
}

int lis_cheia(lis *li){
	if(li == NULL){
		return -1;

	}else{
		return(li->qtd == MAX);
	}

}

int lis_vazia(lis *li){
	if(li == NULL){
		return -1;
	}else{
		return(li->qtd == 0);
	}

}
int insere_lis_final(lis *li,  animal an){
   if(li == NULL){
      return 0;
   }
   if(lista_cheia(li)){
      return 0;
   }
   li->data[li->qtd] = al;
   li->qtd++;
   return 1;
}

int insere_lis_inicio(lis *li,  animal an){
	if(li == NULL){
		return 0;
	}
	if(lis_cheia(li)){
		return 0;
	}
	int i;
	for(i = li->qtd - 1; i >= 0; i--){
		li->data[i+1] = li->data[i];
	}
	li->data[0] = an;
	li->qtd++;
	return 1;

}

int insere_lis_ordenada(lis *li,  animal an){
	if(li == NULL){
		return 0;
	}
	if(lis_cheia(li)){
		return 0;
	}
	int k, i = 0;
	while(i < li->qtd && li->data[i].cod < an.cod){
		i++;
	}
	for(k = li->qtd -1; k >= i; k--){
		li->data[k+1] = li->data[k];
	}
	li->data[i] = al;
	li->qtd++;
	return 1;
}

int consulta_lis_pos(lis *li, int pos,  animal *an){
	if(li == NULL || pos <= 0 || pos >= li->qtd){
		return 0;
	}
	*an = li->data[pos-1];
	return 1;
}

int consulta_lis_cod(lis *li, int cod,  animal *an){
	if(li == NULL){
		return 0;
	}
	int k, i = 0;
	while(i < li->qtd && li->data[i].cod != cod){
		i++;
	}
	if(i == li->qtd){
		return 0;
	}
	*an = li->data[i];
	return 1;
}

int remove_lis_final(lis *li){
	if(li == NULL){
		return 0;
	}
	if(li->qtd == 0){
		return 0;
	}
	li->qtd--;
	return 1;
}

int remove_lis_inicio(lis *li){
	if(li == NULL){
		return 0;
	}
	if(li->qtd == 0){
		return 0;
	}
	int k = 0;
	for(k = 0; k < li->qtd-1;k++){
		li->data[k] = li->data[k+1];
	}
	li->qtd--;
	return 1;
}

remove_lis(lis *li, int cod){
	if(li == NULL){
		return 0;
	}
	if(li->qtd == 0){
		return 0;
	}
	int k, i = 0;
	while(i < li->qtd && li->data[i].cod != cod){
		i++;
	}
	if(i == li->qtd){
		return 0;
	}
	for(k = i; k < li->qtd-1; k++){
		li->data[k] = li->data[k+1];
	}
	li->qtd--;
	return 1;
}
