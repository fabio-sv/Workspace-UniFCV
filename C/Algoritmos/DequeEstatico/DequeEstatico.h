#define MAx 5

struct Aluno
{
	int matricula;
	char nome[30];
	float nota1, nota2, nota3, nota4;
	
};

typedef struct deque Deque;

Deque* cria_Deque();
void libera_Deque(Deque* dq);
int tamanho_Deque(Deque* dq);
int Deque_vazio(Deque* dq);
int Deque_cheio(Deque* dq);
void consulta_Inicio_Deque(Deque* dq);
void consulta_Fim_Deque(Deque* dq);
int inserir_Inicio_Deque(Deque* dp, struct aluno al);
int remove_Fim_DEque(Deque* dq, struct aluno al);
int remove_Inicio_Deque(Deque* dq);
int remove_Fim_Deque(Deque* dq);


