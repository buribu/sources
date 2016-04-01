#define MAX 4

typedef struct pais{
	char npai[20];
	char nmae[20];
    int idadep, idadem;
}pais;

typedef struct conjuge{
    char nome[20];
    char filho1[20];
    char filho2[20];
    int idade;
}conjuge;

typedef struct animal{
    int cod;
    char nome[20];
    char especie[20];

}animal;
typedef struct alma{

        int cod;
        char nome[20];
        char nasc[20];
        char obt[20];
        int civil,amigos;
        animal animal;
        conjuge conjuge;
        pais pais;

}ALMA;













typedef struct elemento* Lista;

Lista *criaLista();

int tamLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insere_inicio_lista(Lista *li, ALMA al);

int insere_final_lista(Lista *li,ALMA al);

int insere_lista_ordenada(Lista *li, ALMA al);

int consulta_lista_pos(Lista *li, int posicao, ALMA *al);

int consulta_lista_mat(Lista *li, int cod, ALMA *al);

int remove_inicio_lista(Lista *li);

int remove_final_lista(Lista *li);

int remove_lista(Lista *li, int cod);



void apagaLista(Lista *li);

int listarNomes(Lista *li);


int contarAnimais(Lista *li);



