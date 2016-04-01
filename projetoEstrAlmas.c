#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//se bool = true
typedef struct parente{
	char *conju;
	char *filho1;
	char *filho2; // struct for filho?
	int idade;
}p;
//se bool false
typedef struct pais{
	char npai;
	char nmae;
    int idadep, idadem;
}pa;    
struct data{
	char *nasc;
	char *mort;
}d;
typedef struct animal{
	char *nbicho;
	char *specie;
}an;
typedef struct agenda{
	char *nome;
	int amigos;
	int solt;
	struct data d;
	struct parente p;
	struct pais pa;
	struct animal an;
}AG;

//;
// codname = noposicao
int main(int argc, char *argv[]){
	char nome[250], data1[11],data2[11],filho1[250],filho2[250];
	char conju[250], pai[250],mae[250],nanimal[250],especie[250];
	char R;
	int amigos,op;
	int n;
     
	AG *ag = (AG*) malloc(sizeof(AG));

	//---------------------
	printf("nome:");
	gets(nome);      //           NOME
	ag->nome = nome;
	//--------------------
	printf("qtd amigos:"); 
	scanf("%d",&amigos);  // QUANTIDADE DE AMIGOS
	ag->amigos = amigos;
	//--------------------
	printf("data nasc:");
	scanf("%s",&data1);
	(*ag).d.nasc = data1;  // datas de nascimento e morte
	printf("data mort:");
	scanf("%s",&data2);
	(*ag).d.mort = data2;
	//-------------------
	printf("Era casado?  1 = sim e  2 = nao");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("Nome do conjuge:");
		    scanf("%s",&conju);
			(*ag).p.conju = conju;
			printf("filho1:");

			scanf("%s",&filho1);
			ag->p.filho1 = filho1;
			printf("filho2:");
			scanf("%s",&filho2);
			ag->p.filho2 = filho2;
		break;
		case 2:
			printf("pai:");
		    scanf("%s",&pai);
		    ag->pa.npai = pai;
		    //----------------------
			printf("mae:");
		    scanf("%s",&mae);
			ag->pa.nmae = mae;
			//--------------------------


		break;
		default:
			printf("opcao incorreta");
	}
	
	printf("animal:");
	scanf("%s",&nanimal);
    printf("especie:");
    scanf("%s",&especie);

	//n = strlen(nome);
    //nome[n] = ag->nome;
	if(op == 1){
	printf("\nnome:%s    \nqtd amigos:%d   \ndataNasc:%s   \ndataMort:%s   \nConjuge:%s \nfilho1:%s \nfilho2:%s",ag->nome,ag->amigos,ag->d.nasc,ag->d.mort,ag->p.conju,ag->p.filho1,ag->p.filho2);
	}else{
	printf("\npai: %s  \nidade: %d \nmae: %s \nidade: %d  ",ag->pa.npai, ag->pa.idadep,ag->pa.nmae,ag->pa.idadem);
	}
	free(ag);
	return 0;
}