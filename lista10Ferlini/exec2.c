#include <stdio.h>
#include <locale.h>
#include <string.h>

// 2.Concatenar duas strings: Crie um programa que concatene
// duas strings usando a função strcat.

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char str1[50];
	char str2[50];
	char str3[100];
	
	printf("----------------------------------------------");
  printf("\n--------------- Crie se Apelido --------------\n");
	printf("----------------------------------------------");
	
	printf("\nDigite seu nome:");
	gets(str1);
	
	printf("Digite seu apelido: ");
	gets(str2);
	
	strcpy(str3,str1);
	strcat(str3," ");
	strcat(str3,str2);
	
	printf("Seu nome/apelido é: %s",str3);
	
	
	
}
