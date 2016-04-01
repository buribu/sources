#include <stdio.h>
#include <stdlib.h>
#include "almas.h"





struct elemento{
       ALMA dados;
       struct elemento *prox;


 };

typedef struct elemento ELEM;

Lista *criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}


void apagaLista(Lista *li){
    if(li != NULL){
        ELEM *no;
        while((*li) != NULL){
             no = *li;
             *li = (*li)->prox;
             free(no);

        }
        free(li);
    }
}
int tamLista(Lista *li){
    if(li == NULL){
        return 0;
    }
    int acum = 0;
    ELEM *no = *li;
    while(no != NULL){
        acum++;
        no = no->prox;

    }
    return acum;

}

int listaCheia(Lista *li){
    return 0;
}

int listaVazia(Lista *li){
    if(li == NULL){
        return 1;
    }
    if(*li == NULL){
        return 1;
    }
    return 0;
}

int insere_inicio_lista(Lista *li, ALMA al){
    if(li == NULL){
        return 0;

    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
        return 0;
    }
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insere_final_lista(Lista *li, ALMA al){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
       return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if((*li)==NULL){
        *li = no;
    }else{
        ELEM * aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;

        }
        aux->prox = no;
    }
    return 1;

}

int insere_lista_ordenada(Lista *li, ALMA al){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
        return 0;
    }
    no->dados = al;
    if(listaVazia(li)){
        no->prox = (*li);
        *li = no;
        return 1;

    }else{
        ELEM *ant, *atual = *li;
        while(atual != NULL && atual->dados.cod < al.cod){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = ant->prox;
            ant->prox = no;
        }
        return 1;
    }
}

int remove_inicio_lista(Lista *li){
    if(li == NULL){
        return 0;
    }
    if(*li == NULL){
        return 0;
    }
    ELEM *no = *li;
    *li = no->prox;
    free(no);
    return 1;

}

int remove_final_lista(Lista *li){
    if(li == NULL){
        return 0;
    }
    if((*li) == NULL){
        return 0;
    }
    ELEM *ant = NULL, *no = *li;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;

    }
    if(no == *li){
        *li = no->prox;

    }else{
        ant->prox = no->prox;
    }
    free(no);
    return 1;
}

int remove_lista(Lista *li, int cod){
    if(li == NULL){
        return 0;
    }
    ELEM *ant, *no = *li;
    while(no != NULL && no->dados.cod != cod){
        ant = no;
        no = no->prox;
    }
    if(no == NULL){
        return 0;
    }
    if(no == *li){
        *li = no->prox;

    }else{
        ant->prox = no->prox;

    }
    free(no);
    return 1;
}

int consulta_lista_pos(Lista *li, int posicao, ALMA *al){
    if(li == NULL || posicao <= 0){
        return 0;
    }
    ELEM *no = *li;
    int i = 1;
    while (no != NULL && i < posicao){
        no = no->prox;
        i++;
    }
    if(no == NULL){
         return 0;
    }else{
        *al = no->dados;
        return 1;
    }
}

int listarNomes(Lista *li){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    int i = 1;
    printf("\n\nLista de almas Humanas");
    while (no != NULL && i < 4){
        printf("\n%d  ",i);
        printf("%s",no->dados.nome);
        no = no->prox;


        //printf("\n\n%s\t",(*no).dados.animal.nome);
        i++;
        /*if(i == 3){

            printf("\nA quantidade de animais foi superada");


            //return 1;

        }*/
    }

    return 1;
}

int contarAnimais(Lista *li){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    int i = 1, y = 0;
    //printf("\n\nLista de animais");
    while (no != NULL){

        if(no->dados.animal.nome){
            y+=1;
            //printf("\n%d",y);
            //printf("\n%d  ",i);
            //printf("%s",no->dados.animal.nome);
            no = no->prox;
            if(y == MAX){
                printf("\nNao aceitamos mais animais!!!");

            }
        }




        //printf("\n\n%s\t",(*no).dados.animal.nome);
        i++;
        /*if(i == 3){

            printf("\nA quantidade de animais foi superada");


            //return 1;

        }*/
    }


    return 1;
}



int consulta_lista_mat(Lista *li, int cod, ALMA *al){
    if(li == NULL){
        return 0;
    }
    ELEM *no = *li;
    while((no != NULL) && (no->dados.cod != cod)){
         no = no->prox;

    }
    if(no == NULL){
        return 0;
    }else{
        *al = no->dados;
        return 1;

    }

}


