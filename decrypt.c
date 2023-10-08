#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

#define N 150

//prototype
void decrypt(char msg[], int key){
	
	//vetor padrão unicode ASCII
        char ASCII[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{};:'\",.<>?/";
        char c_msg[N] = "";

        int size_A = sizeof(ASCII) / sizeof(ASCII[0]); //tamanho utilizado

        for(int i = 0; msg[i] != '\0'; i++){
                        for(int j = 0; j < size_A; j++){
                                if(msg[i] == ASCII[j]){
                                        c_msg[i] = ASCII[(j-key) % size_A ];// subtração
                                        break;
                                }
				else{
					c_msg[i] = msg[i];
				}
                        }
        	}

        printf("\noutput: %s\n", c_msg);
}
