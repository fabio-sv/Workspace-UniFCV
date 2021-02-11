#include <stdio.h>

void Bubble_Sort(int vetor[], int index){
	
	int i, j, y;
	
	for (i = 0; i < index; i ++){
		for (j = 0; j < index - 1; j++){
			if (vetor[j] > vetor[j + 1]){
				int temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}
	for (y = 0; y < index; y++){
		printf("%d\n", vetor[y]);
	}
}

int main(int argc, char** argv)
{
	int index;
	int vetor[] = {9,8,7,6,5,4,3,2,1,0};
	
	index = sizeof(vetor)/sizeof(int);
	
	Bubble_Sort(vetor, index);

	
	return 0;
}