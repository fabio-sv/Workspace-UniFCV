#include <stdio.h>

int main(int argc, char** argv)
{
	int index;
	int vetor[] = {1,2,3};
	
	// verifica a quantidade de posições do vetor 
	index = sizeof(vetor)/sizeof(int);
	
	printf("Quantidade: %d\n", index);
	
	//saida: Quantidade 3
	
	return 0;
}