#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "almas.h"


int main(int argc, char *argv[])

{
    int posicao, cod,animax,op;
    ALMA al, dados_alma;
    Lista *li; //ponteiro para ponteiro
               //que está no arquivo
               //listaLigada.h
    int x;


    li = criaLista();

while(1){





   /*al1.cod = 124;
   strcpy(al1.nome, "raphael");
   strcpy(al1.nasc, "11-15-1647");
   strcpy(al1.obt, "12-15-1450");
   al1.amigos = 4;
   al1.civil = 0;
   strcpy(al1.animal.nome, "ticula");
   strcpy(al1.animal.especie, "tucano");



   al2.cod = 125;
   strcpy(al2.nome, "miguel");
   strcpy(al2.nasc, "11-15-12");
   strcpy(al2.obt, "12-15-1450");
   al2.amigos = 6;
   al2.civil = 0;
   strcpy(al2.animal.nome, "atrogildo");
   strcpy(al2.animal.especie, "maniput");



   al3.cod = 126;
   strcpy(al3.nome,"gabriel");
   strcpy(al3.nasc, "12-13-1679");
   strcpy(al3.obt, "15-16-1750");
   al3.amigos = 5;
   al3.civil = 1;
   strcpy(al3.animal.nome, "uruca");
   strcpy(al3.animal.especie, "ariranha");



*/

    x = tamLista(li);

    printf("\nO tamanho da lista e: %d\n",x);

    if(listaCheia(li)){
        printf("\nLista esta cheia!");
    }else{
        printf("\nLista esta vazia.");
    }

    if(listaVazia(li)){

        printf("\nLista esta vazia!");
    }else{
        printf("\nLista nao esta vazia.");
    }

    printf("\n1) inserir dados:");
    printf("\n2) Listar Nomes:");
    printf("\n3) Consultar ficha:");


    printf("\n\nDigite uma opcao:");
    scanf("%d",&op);
    switch(op){

case 1:

    //printf("codigo: ");
    //scanf("%d",&al.cod);
    printf("nome        : ");
    scanf("%s",al.nome);

    printf("nascimento  : ");
    scanf("%s",al.nasc);
    printf("morte       : ");
    scanf("%s",al.obt);
    printf("qtd_amigos  : ");
    scanf("%d",&al.amigos);
    printf("Estado civil:");
    scanf("%d",&al.civil);

    if(al.civil == 1){

    printf("conjuge     : ");
    scanf("%s",al.conjuge.nome);
    printf("filho1      : ");
    scanf("%s",al.conjuge.filho1);
    printf("filho2      : ");
    scanf("%s",al.conjuge.filho2);
    printf("idade       : ");
    scanf("%d",&al.conjuge.idade);
    }else{
    printf("pai         : ");
    scanf("%s",al.pais.npai);
    printf("idade       : ");
    scanf("%d",&al.pais.idadep);
    printf("mae         : ");
    scanf("%s",al.pais.nmae);
    printf("idade       : ");
    scanf("%d",&al.pais.idadem);
    }

    animax = contarAnimais(li);
    if(animax >= MAX){
        printf("Limite de animais atingido!!");
    }else{
     printf("animal      : ");
     scanf("%s",al.animal.nome);
     printf("especie     : ");
     scanf("%s",al.animal.especie);
    }



    x = insere_lista_ordenada(li, al);
    if(x){
          printf("\nInserido ordenadamente com sucesso!");
    }else{
          printf("\nNao foi possivel inserir ordenadamente.");
    }
    break;



case 2:

    listarNomes(li);
    printf("\n\n");

    break;
 //   animax = contarAnimais(li);



  //  al4.cod = 127;
  //  strcpy(al4.nome,"tonel");
  //  strcpy(al4.nasc, "12-13-1720");
  //  strcpy(al4.obt, "15-16-1820");
  //  al4.amigos = 6;
  //  al4.civil = 1;
  //  if(animax){
  //  al4.animal.nome;
  //  printf("Limite de animais foi esgotado!!");
  // }else{

  //  strcpy(al4.animal.nome, "prsra");
 //   strcpy(al4.animal.especie, "vart");

  // }


case 3:
    printf("posicao:");
    scanf("%d",&posicao);



    //printf("\nO tamanho da lista e: %d\n",x);


    x = consulta_lista_pos(li, posicao, &al);
    printf("\n\nConteudo na posicao %d:", posicao);
    //printf("\ncod         : %d", al.cod);
    printf("\nnome        :%s",al.nome);
    printf("\nnascimento  :%s",al.nasc);
    printf("\nmorte       :%s",al.obt);
    printf("\nqtd_amigos  :%d",al.amigos);
    printf("\nestado civil:%d",al.civil);
    if(al.conjuge.nome){
    printf("\nconjuge     :%s",al.conjuge.nome);
    printf("\nidade       :%d",al.conjuge.idade);
    printf("\nfilho1      :%s",al.conjuge.filho1);
    printf("\nfilho2      :%s",al.conjuge.filho2);
    }
    if(al.pais.npai){
    printf("\npai         :%s",al.pais.npai);
    printf("\nidade       :%d",al.pais.idadep);
    printf("\nmae:        :%s",al.pais.nmae);
    printf("\nidade       :%d",al.pais.idadem);
    }
    printf("\nanimal :%s      especie :%s",al.animal.nome, al.animal.especie);
break;


default:
    printf("\nDigite uma opção valida!");

}
    x = tamLista(li);

} /*




     x = consulta_lista_mat(li, cod, &dados_alma);
    printf("\n\nConteudo na cod %d:", cod);
    printf("\ncod         : %d", dados_alma.cod);
    printf("\nnome        : %s", dados_alma.nome);
    printf("\nnascimento  : %s", dados_alma.nasc);
    printf("\nobito       : %s", dados_alma.obt);
    printf("\nestado civil: %d", dados_alma.civil);
    printf("\nqtd_amigos  : %d", dados_alma.amigos);
    printf("\nanimal      : %s", dados_alma.animal.nome);
    printf("\nespecie     : %s", dados_alma.animal.especie);

    cod = 127; dados_alma = al4;
    x = consulta_lista_mat(li, cod, &dados_alma);
    printf("\n\nConteudo na cod %d:", cod);
    printf("\ncodigo        : %d", dados_alma.cod);
    printf("\nnome          : %s", dados_alma.nome);
    printf("\nnascimento    : %s", dados_alma.nasc);
    printf("\nobito         : %s", dados_alma.obt);
    printf("\nestado civil  : %d", dados_alma.civil);
    printf("\nqtd_amigos    : %d", dados_alma.amigos);
    printf("\nanimal        : %s", dados_alma.animal.nome);
    printf("\nespecie       : %s", dados_alma.animal.especie);


     x = insere_inicio_lista(li,al1);
    if(x){
        printf("\nInserido no inicio com sucesso!");
    }else{
         printf("\nNao foi possivel inserir no inicio.");
    }

    x = insere_final_lista(li, al2);
    if(x){
       printf("\nInserindo no final com sucesso!");
    }else{
        printf("\nNao foi possivel inserir no final.");
    }



    x = remove_inicio_lista(li);
    if(x){
        printf("\nRemovido do inicio com sucesso!");

    }else{
        printf("\nNao foi possivel remover do inicio.");
    }

    x = remove_final_lista(li);
    if(x){
        printf("\nRemovido do final com sucesso!");
    }else{
        printf("\nNao foi possivel remover do final.");

    }

*
    //printf("\nDigite a cod:");
   // scanf("%d",&cod);
    x = remove_lista(li, cod);
    if(x){
        printf("\nRemovido elemento com sucesso!");
    }else{
        printf("\nNao foi possivel remover o elemento.");
    }
*/

    //----------------------
  apagaLista(li);

  return 0;
  system("PAUSE");
}
