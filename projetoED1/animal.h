#define MAX 3


typedef struct animal{
    int cod;
    char nome[20];
    char especie[20];
}animal;


typedef struct lis LIS;

LIS *cria_lis();


void libera_lis(LIS *li);

int tamanho_lis(LIS *li);

int lis_cheia(LIS *li);

int lis_vazia(LIS *li);

int insere_lis_final(LIS *li, animal an);

int insere_lis_inicio(LIS *li, animal an);

int insere_lis_ordenada(LIS *li,  animal an);

int consulta_lis_pos(LIS *li, int pos,  animal *an);

int consulta_lis_cod(LIS *li, int cod,  animal *an);

int remove_lis_final(LIS *li);

int remove_lis_inicio(LIS *li);

int remove_lis(LIS *li, int cod);

