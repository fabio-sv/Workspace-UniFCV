#include<stdio.h>
#include<stdio.h>
#include "FilaPrioridade.h"

struct fila_prioridade{
	int qtd;
	struct paciente dados[MAX]
};

//Cria fila 
FilaPrio* cria_FilaPrio(){
	
	FilaPrio *fp;
	fp = (FilaPrio*) malloc(size(struct fila_prioridade));
	
	if(fp != NULL){
		fp->qtd = 0
	}
	retun fp;
}

//Destruindo uma fila 
void libera_FilaPrio(FilaPrio* fp){
	free(fp);
}

//Tamanho da fila 
int tamanho_FilaPrio(Fila* fp){
	if(fp == NULL){
		return -1;
	}
	else
		return fp->qtd;
	
}
//Fila vazia 
int fila_vazia_FilaPrio(FilaPrio* fp){
	if(fp == NULL){
		return -1;
	}
	else 
		return (fp->qtd == 0);
}
//Fila cheia 
int fila_cheia_FilaPrio(FilaPrio* fp){
	if(fp == NULL){
		return -1;
	}
	else 
		return (fp->qtd == MAX);
}
//Insere na fila 
int insere_FilaPrio(FilaPrio* fp, struct paciente pa){
	if(fp == NULL)
		return 0;
	if(fila_cheia_FilaPrio(fp))
		return 0;
	int i = fp->qtd -1;
	
	while(i >= 0 && fp->dados[i].prio >= pa.prio){
		fp->dados[i + 1] = fp->dados[i];
		i--;
	}
	fp->dados[i + 1] = pa;
	fp->qtd++;
	return 1;
}
int remove(FilaPrio* fp){
	if(fp == NULL){
		return 0;
	}
	if(fila_vazia_FilaPrio(fp))
		return 0;
	fp->qtd--;
	return 1;
	
}

void consulta_FilaPrio(FilaPrio* fp){
	if (fp == NULL)
		printf("Fila invalida");
	if (fila_vazia_FilaPrio(fp))
		printf("Fila Vazia");
	printf("Nome: %s \n", fp-> dados[fp->qtd -1].nome);
	printf("Prioridade: %d \n", fp-> dados[fp->qtd -1].prio);
}
