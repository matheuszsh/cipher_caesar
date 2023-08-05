#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

//prototype
void encrypt(char msg[], int key);

int main(){

	char nome[] = {"MATHEUS"};
	
	printf("input: %s\n", nome);
	encrypt(nome, 2);
	

	return 0;
}


void encrypt(char msg[], int key){

	char ASCII[] = {" ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char c_msg[N];

	int size_A = sizeof(ASCII) / sizeof(ASCII[0]); //tamanho utilizado

	for(int i = 0; msg[i] != '\0'; i++){
		if(isalpha(msg[i]) || msg[i] == '\n'){
			for(int j = 0; j < size_A; j++){
				if(msg[i] == ASCII[j]){
					c_msg[i] = ASCII[((j+key) + size_A) % size_A ];
					fflush(stdin);
				}
			}
		}
		
	}

	printf("output: %s\n", c_msg);

}
