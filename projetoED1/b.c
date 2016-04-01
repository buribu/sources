
//se bool = true
typedef struct parente{
	char *conju;
	char *filho1;
	char *filho2; // struct for filho?
	int idade;
}p;
//se bool false
typedef struct pais{
	char *npai;
	char *nmae;
    int idadep, idadem;
}pa;
struct data{
	char *nasc;
	char *mort;
	int dia,mes,ano;

}d;
typedef struct animal{
	char *nbicho;
	char *specie;
}an;
typedef struct agenda{
    int cod;
	char *nome;
	int amigos;
	int solt;
	struct data d;
	struct parente p;
	struct pais pa;
	struct animal an;
}AG;


typedef struct elemento* Lista;

Lista *criaLista();

void apagaLista(Lista *li);

int tamLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insere_inicio_lista(Lista *li, struct agenda ag);

int insere_final_lista(Lista *li,struct agenda ag);

int insere_lista_ordenada(Lista *li, struct agenda ag);

int consulta_lista_pos(Lista *li, int posicao, struct agenda *ag);

int consulta_lista_mat(Lista *li, int matricula, struct agenda *ag);

int remove_inicio_lista(Lista *li);

int remove_final_lista(Lista *li);

int remove_lista(Lista *li, int cod);

void apagaLista(Lista *li);


    printf("nome        :%s",al.nome);
    printf("nascimento  :%s",al.nasc);
    printf("morte       :%s",al.obt);
    printf("qtd_amigos  :%d",al.amigos);
    printf("estado civil:%d",al.civil);
    printf("conjuge     :%s",al.conjuge.nome);
    printf("idade       :%d",al.conjuge.idade);
    printf("pai         :%s      idade      :%d",al.pais.npai,al.pais.idadep);
    printf("mae:        :%s      idade      :%d",al.pais.nmae,al.pais.idadem);
    printf("animal      :%s      especie    :%s",al.animal.nome, al.animal.especie);


