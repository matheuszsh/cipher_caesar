#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

int main(){

	char nome[] = {"matheus"};
	
	printf("input: %s\n", nome);

	


	return 0;
}


void encrypt(char msg[], int key){

	char ASCII[] = {" ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int ASCII_SIZE = sizeof(ASCII) / sizeof(0);
	char c_msg[N];

	/*for(int i = 0; ; i++){
	
		c_msg[i] = ASCII[strcspn(ASCII, msg[i]) + key];		
	}*/ // erro:

	for(int i = 0; ){
	
	}
	printf("output: %s", c_msg);

}
