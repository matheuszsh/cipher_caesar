#include <stdio.h>
#include <string.h>

int main(){

	char nome[10] = {"matheus"};
	
	printf("output: %ld\n", strcspn(nome, "e"));

}
