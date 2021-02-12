#include <stdio.h>
#include <stdlib.h>

int main()
{
	char escolha[1];

    printf("Pronto para comecar(S/N)\n");
    gets(escolha);
    
    
    if (escolha == "s"){
		printf("dentro if");
		
	}else {
		printf("dentro else");
		return 0;
	}
    
    
    return 0;
}