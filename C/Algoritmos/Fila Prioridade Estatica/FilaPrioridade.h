#define MAX 5

struct paciente {
	
	char nom[60];
	int prio;
	
}

typedef struct fila_prioridade FilaPrio;

FilaPrio* cria_FilaPrio();
void libera_FilaPrio(FilaPrio* fp);
void consulta_FilaPrio(FilaPrio* fp);
int insere_FilaPrio(Fila* fp, struct paciente pa);
int remove_FilaPrio(FilaPrio* fp);
int tamanho_FilaPrio(FilaPrio* fp);
int fila_vazia_FilaPrio(FilaPrio* fp);
int fila_cheia_FilaPrio(FilaPrio* fp);