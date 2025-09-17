//Hector-> 11, 13 e 22
//Contexto: Escreva um programa que converta uma temperatura em graus
//Celsius para Fahrenheit ou vice-versa, dependendo da escolha do usuário.

//A fórmula para converter graus Celsius (ºC) em graus Fahrenheit (ºF) é: ºF = (ºC * 1.8) + 32
//Fahrenheit para grau Celsius é C = 5/9 x (F – 32)

 //exercício 22 com Switch-Case
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float val,calc;
	int esc;
	
	printf("Digite o valor da temperatura: ");
	scanf("%d",&val);
	
	printf("Selecione um valor 1(FHR -> C) ou 2(C -> FHR): ");
	scanf("%d",&esc);
	
	switch(esc){
		case 1: calc = 5/9 * (val - 32);
		        printf("Esse valor em ºC é: %f",calc);
		    break;
		case 2: calc = (val *1.8) + 32;
		        printf("Esse valor em ºFHR é: %f",calc);
		    break;
		default: printf("Digite um dos números");
	}
    
	
	
}
