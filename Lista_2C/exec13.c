//Contexto: Uma empresa tem um programa de reconhecimento para seus
//funcionários. A quantidade de pontos ganhos determina o nível de premiação.
//Escreva um programa que determine o nível de premiação com base nos
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
		printf("Premiação Regular!!!");
	} else if(pont >= 1000 ){
		printf("Premiação Máxima Parabéns!!!");
	} else{
		printf("Premiação Simples!!!");
	}
}
