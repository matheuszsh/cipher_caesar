#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "mode.h"

void showArt();
void clear_buffer();
int getOption(int option);
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

	switch(option){
	
		case 1:
			system("clear");
			showArt();
			functionGetMsg(msg);
			getKey = enterKey(getKey);
			clear_buffer();
			printf("input: %s\n", msg);//test
			encrypt(msg, getKey);
			break;
		case 2:
			system("clear");
			showArt();
			functionGetMsg(msg);
			getKey = enterKey(getKey);
			clear_buffer();
			printf("input: %s\n", msg);//test
			decrypt(msg, getKey);
			break;
		default:
			system("clear");
			showArt();
			printf("Something is wrong, select option again.\n");
			break;
	}
}

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

int getOption(int option){
	printf("\nENTER OPTION:\n\n");
        printf("(1)Encrypt\n(2)Decrypt\n\n");
	printf(">>>:");
	scanf("%i", &option);
	
	return option; 
}

void clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void functionGetMsg(char msg[]){
	
	//int msgUpper[N];

	printf("Input the Message: ");
	fgets(msg, N, stdin);

	msg[strcspn(msg, "\n")] = '\0';

	//Change char msg to upper
	/*for(int i = 0; i < strlen(msg); i++){
		msg[i] = toupper(msg[i]);
	}*/
	
}

int enterKey(int key){

	printf("KEY NUMBER: ");
	scanf("%i", &key);

	if(key == (int)key){
		return key;
	}
}	

