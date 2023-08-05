#include <stdio.h>
#include <string.h>

int main(){

	char nome[10] = {"matheus"};

	//int size_nome = sizeof(nome) / sizeof(0);
		
	printf("string content: %s\n", nome);
	printf("output: %ld\n", strcspn(nome, "e"));
	printf("size:%li\n",strlen(nome));
	printf("%i\n", strchr(nome, 't'));

}
