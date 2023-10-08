#include <stdio.h>
#include <stdlib.h>

int main(void){

	printf("***|Construindo o Arquivo|***\n");
	system("gcc main.c encrypt.c decrypt.c -o cipherofcesar");
	printf("Arquivo cipherofcesar construido.\n\n./cipherofcesar para usar\n");
}
