#include<stdio.h>
#include<stdio.h>
#include "FilaPrioridade.h"

int main(){
	
	FilaPrio8 fp;
	int x;
	fp = cria_FilaPrio();
	x = tamanho_FilaPrio(fp);
	printf("Tamanho da fila: %d \n",x );
	x = fila_vazia_FilaPrio(fp);
	printf("Fila Vazia: %d \n", x);
	struct paciennte dados_pa;
	dados_pa.prio = 1;
	strcpy(dados_pa.nome, "Jose");
	x = insere_FilaPrio(fp, dados_pa);
	printf("Inserido: %d \n", x);
	x = tamanho_FilaPrio(fp);
	printf("Tamanho da fila: %d \n", x);
	x = fila_vazia_FilaPrio(fp);
	printf("Fila Vazia: %d \n", x);
	dados_pa.prio = 2;
	strcpy(dados_pa.nome, "Antonio");
	x = insere_FilaPrio(fp, dados_pa);
	printf("Inserido: %d \n", x);
	dados_pa.prio = 3;
	strcpy(dados_pa.nome, "Paula");
	x = insere_FilaPrio(fp, dados_pa);
	printf("Inserido: %d \n", x);
	x = tamanho_FilaPrio(fp);
	printf("Tamanho da fila: %d \n", x);
	printf("Primeiro da fila: \n");
	consulta_FilaPrio(fp);
	libera_FilaPrio(fp);
	
	return 0;
	
}