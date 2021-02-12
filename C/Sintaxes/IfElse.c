#include <stdio.h>

int main(int argc, char** argv)
{
	int senha = 123;
	
	printf("Informe a senha: ");
	scanf("%d", &senha);
	
	printf("\n");
	
	if (senha == 123){
		printf("Senha correta.\n");
	}
	else {
		printf("Senha invalida.\n");
	}
	
	return 0;
}