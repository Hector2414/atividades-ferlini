//Contexto: Uma empresa tem um programa de reconhecimento para seus
//funcion�rios. A quantidade de pontos ganhos determina o n�vel de premia��o.
//Escreva um programa que determine o n�vel de premia��o com base nos
//pontos.


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int pont;
	
	printf("Digite seus pontos: ");
	scanf("%d",&pont);
	
	
	
	if(pont == 1000 ){
		printf("Premia��o Regular!!!");
	} else if(pont >= 1000 ){
		printf("Premia��o M�xima Parab�ns!!!");
	} else{
		printf("Premia��o Simples!!!");
	}
}
