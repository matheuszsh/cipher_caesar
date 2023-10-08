#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

#define N 150

//prototype
void encrypt(char msg[], int key){

	//vetor padrão unicode ASCII
	char ASCII[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{};:'\",.<>?/";
	char c_msg[N] = "";

	int size_A = sizeof(ASCII) / sizeof(ASCII[0]); //sizeof retorna a quantidade de bytes(1 no caso de char) / pelo elemento unitário

	//iniciando loop de comparação de vetores
	
	//continua até msg[i] for diferente do final do vetor('\0')
	for(int i = 0; msg[i] != '\0'; i++){

			//percorre o array ASCII comparando com msg[i]
			for(int j = 0; j < size_A; j++){
				if(msg[i] == ASCII[j]){
					
					// % garante que o array não será extrapolado, reiniciando a contagem
					c_msg[i] = ASCII[(j+key) % size_A ];
					break;
				}
				// Caso o caractere não esteja presente no array, mantenha-se
				else{
					c_msg[i] = msg[i];
				}
			}
		}
		
	printf("\noutput: %s\n", c_msg);
}
