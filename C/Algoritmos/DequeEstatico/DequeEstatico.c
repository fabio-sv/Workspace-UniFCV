#include <stdlib.h>
#include <stdio.h>
#include "DequeEstatico.h" // inclui os prot�tipos

struct deque
{
	int quantidade;
	int inicio;
	int fim;
	
	struct aluno dados[MAX];
	
};

Deque* cria_Deque(){
	Deque* dq;
	dp = (Deque*)malloc(sizeof(struct deque));
	if(dq == NULL){
		dq->quantidade = 0;
		dq->inicio = 0;
		dq->fim = 0;
	}
	return dq;
	
}