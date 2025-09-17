//Hector-> 11, 13 e 22
//Contexto: Um programa deve ler as medidas dos lados de um triângulo e
 //determinar se é um triângulo equilátero, isósceles ou escaleno.
#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int l1,l2,l3;
	
	
	
	printf("Digite o primeiro lado do triângulo:  ");
	scanf("%d",&l1);
	
	printf("Digite o segundo lado do triângulo: ");
	scanf("%d",&l2);
	
	printf("Digite o terceiro lado do triângulo: ");
	scanf("%d",&l3);
	
	
	
	if(l1 == l2 && l1 == l3){
		printf("Este é um triângulo equilátero!!!");
	} else if(l1 == l2 && l1 != l3){
		printf("Este é um triângulo isósceles!!!");
	} else{
		printf("Este é um triângulo escaleno!!!");
	}
	
}

