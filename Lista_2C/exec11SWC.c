//Contexto: Um programa deve ler as medidas dos lados de um triângulo e
 //determinar se é um triângulo equilátero, isósceles ou escaleno.
 
 //exercício 11 com Switch-Case
#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int l1,l2,l3,cat;
	
	
	
	printf("Digite o primeiro lado do triângulo:  ");
	scanf("%d",&l1);
	
	printf("Digite o segundo lado do triângulo: ");
	scanf("%d",&l2);
	
	printf("Digite o terceiro lado do triângulo: ");
	scanf("%d",&l3);
	
	
	
	if(l1 == l2 && l1 == l3){
		cat = 1;
		
	} else if(l1 == l2 && l1 != l3){
		
		cat = 2;
		
	} else{
		cat = 3;
	}
	
	switch(cat){
		case 1:
			printf("Este é um triângulo equilátero!!!");
		break;
		
		case 2:
			printf("Este é um triângulo isósceles!!!");
		break;
		
		case 3:
			printf("Este é um triângulo escaleno!!!");
		break;
		
		default: printf("Isso não é válido!!!");
	}
	
}
