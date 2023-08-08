#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

#define N 150

//prototype
void encrypt(char msg[], int key){

	char ASCII[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char c_msg[N];

	int size_A = sizeof(ASCII) / sizeof(ASCII[0]); //tamanho utilizado

	for(int i = 0; i <= size_A; i++){
		if(isalpha(msg[i])){
			for(int j = 0; j < size_A; j++){
				if(toupper(msg[i]) == ASCII[j]){
					c_msg[i] = ASCII[((j+key) + size_A) % size_A ];
					fflush(stdin);
					printf("%i\n", i);
					break;
				}}
			}
		}
		
	}

	printf("output: %s\n", c_msg);

}
