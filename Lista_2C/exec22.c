//Contexto: Escreva um programa que converta uma temperatura em graus
//Celsius para Fahrenheit ou vice-versa, dependendo da escolha do usu�rio.

//A f�rmula para converter graus Celsius (�C) em graus Fahrenheit (�F) �: �F = (�C * 1.8) + 32
//Fahrenheit para grau Celsius � C = 5/9 x (F � 32)
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
	
    
    if(esc == 1){
    	 calc = 5/9 * val - 32;
		        printf("Esse valor em �C �: %f",calc);
	} else if(esc == 2){
		calc = (val *1.8) + 32;
		        printf("Esse valor em �FHR �: %f",calc);
	} else{
		 printf("Digite um dos n�meros (1 ou 2)!!!");
	}
	
	
}
