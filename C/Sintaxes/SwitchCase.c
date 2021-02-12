#include<stdio.h>

int main(int argc, char** argv)
{
	int animal;
	
	printf("--------Som dos animais--------\n");
	printf("1. Vaca\n");
	printf("2. Gato\n");
	printf("3. Cachorro\n");
	
	printf("\n");
	
	printf("Escolha um animal: ");
	scanf("%d", &animal);
	
	switch(animal)
	{
	case 1:
		printf("\nMUUUUUU...\n");
		break;
	case 2:
		printf("\nMIAUUUUU...\n");
		break;	
	case 3:
		printf("\nAUAUAUAU...\n");
		break;
	default:
		printf("\nValor invalido");
		break;
	}

	return 0;
}