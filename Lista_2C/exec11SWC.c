//Contexto: Um programa deve ler as medidas dos lados de um tri�ngulo e
 //determinar se � um tri�ngulo equil�tero, is�sceles ou escaleno.
 
 //exerc�cio 11 com Switch-Case
#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int l1,l2,l3,cat;
	
	
	
	printf("Digite o primeiro lado do tri�ngulo:  ");
	scanf("%d",&l1);
	
	printf("Digite o segundo lado do tri�ngulo: ");
	scanf("%d",&l2);
	
	printf("Digite o terceiro lado do tri�ngulo: ");
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
			printf("Este � um tri�ngulo equil�tero!!!");
		break;
		
		case 2:
			printf("Este � um tri�ngulo is�sceles!!!");
		break;
		
		case 3:
			printf("Este � um tri�ngulo escaleno!!!");
		break;
		
		default: printf("Isso n�o � v�lido!!!");
	}
	
}
