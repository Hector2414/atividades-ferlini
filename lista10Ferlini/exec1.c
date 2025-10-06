#include <stdio.h>
#include <locale.h>
#include <string.h>

//1.Copiar uma string: Escreva um programa que copie uma string
//para outra usando a função strcpy .

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char strg1[50];
	char strg2[50];
	char strg3[100];
	
	printf("Digite seu nome: ");
	gets(strg1);
	//fgets(strg1, sizeof(strg1), stdin);
	
	printf("Digite seu sobrenome: ");
	gets(strg2);
	//fgets(strg2,sizeof(strg2),stdin);
	
	
	
	strcpy(strg3,strg1);
	strcat(strg3, " ");
	strcat(strg3, strg2);
	
	printf("Seu nome é: %s",strg3);
	
	
}
