#include <stdio.h>

void Select_Sort(int vetor[], int index){
	
	int i, j, minIndex;
	
	for(i = 0; i < index; i++){
		minIndex = i;
		
		for(j = i + 1; j < index; j++){
				printf("%d", vetor[index]);
			
			if(vetor[index] > vetor[j]){
			
			}
		}
		
		
	}
	
	
	
}

int main(int argc, char** argv)
{
	
	int vetor[] = {60, 40, 75, 32};
	int index = sizeof(vetor)/sizeof(int);
	
	Select_Sort(vetor, index);
	

	
	return 0;
}