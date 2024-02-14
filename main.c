#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

//protótipos de funções
void showArt();
void clear_buffer();
int getOption(int option);
int useInAFileOption(int option);
void functionGetMsg(char msg[]);
int enterKey(int key);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int option = 0;
	char msg[N];
	int getKey = 0;
	
	system("clear");
	showArt();
	option = getOption(option);
	clear_buffer();

	system("clear");
	showArt();
	functionGetMsg(msg);
	getKey = enterKey(getKey);
	clear_buffer();
	
	switch(option){
		//acessa modo Encriptar
		case 1:
			encrypt(msg, getKey);
			break;
		//acessa modo Decriptar
		case 2:
			decrypt(msg, getKey);
			break;
		//em caso de não houver opção
		default:
			printf("Something is wrong, select option again.\n");
			break;
	}
}

//Arte do menu do programa
void showArt(){

	printf("VERSION 1.0\n");

	printf("\n   _____ _       _                  ____   __    _____\n");	
	printf("  / ____(_)     | |                / __ \\ / _|  / ____|\n");
       	printf(" | |     _ _ __ | |__   ___ _ __  | |  | | |_  | |     __ _  ___  ___  __ _ _ __\n");
	printf(" | |    | | '_ \\| '_ \\ / _ \\ '__| | |  | |  _| | |    / _` |/ _ \\/ __|/ _` | '__|\n");
	printf(" | |____| | |_) | | | |  __/ |    | |__| | |   | |___| (_| |  __/\\__ \\ (_| | |\n");
	printf("  \\_____|_| .__/|_| |_|\\___|_|     \\____/|_|    \\_____\\__,_|\\___||___/\\__,_|_|\n");
	printf("          | |\n");
	printf("          |_|\n\n");

}

//seleciona a opção
int getOption(int option){
	printf("\nENTER OPTION:\n\n");
        printf("(1)Encrypt\n(2)Decrypt\n");
	printf(">>>:");
	scanf("%i", &option);
	
	return option; 
}

//Limpa o buffer de input
void clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

//Função pra pegar a mensagem
void functionGetMsg(char msg[]){

	printf("Input the Message: ");
	fgets(msg, N, stdin);

	msg[strcspn(msg, "\n")] = '\0';
	
}

//Recebe a chave de deslocamento
int enterKey(int key){

	printf("KEY NUMBER: ");
	scanf("%i", &key);

	if(key == (int)key){
		return key;
	}
}	

