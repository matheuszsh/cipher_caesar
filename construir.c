#include <stdio.h>
#include <stdlib.h>

int main(void){

	printf("***|Construindo o Arquivo|***\n");
	system("gcc main.c encrypt.c decrypt.c -o cipherofcaesar");
	printf("Arquivo cipherofcaesar construido.\n\n./cipherofcaesar para usar\n");
}
