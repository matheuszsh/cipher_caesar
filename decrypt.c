#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

#define N 150

//prototype
void decrypt(char msg[], int key){

        char ASCII[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        char c_msg[N] = "";

        int size_A = sizeof(ASCII) / sizeof(ASCII[0]); //tamanho utilizado

        for(int i = 0; msg[i] != '\0'; i++){
                if(isalpha(msg[i])){
                        for(int j = 0; j < size_A; j++){
                                if(toupper(msg[i]) == ASCII[j]){
                                        fflush(stdin);
                                        c_msg[i] = ASCII[(j-key) % size_A ];// subtração
                                        printf("%i\n", i);
                                        break;
                                }
                        }
                }
                else{
                        c_msg[i] = msg[i];
                        printf("Else case: %i\n", i);
                        continue;
                }

        }
        printf("output: %s\n", c_msg);
        printf("\n~VERSÂO TESTE DO MODULO decrypt.c~\n");
}
