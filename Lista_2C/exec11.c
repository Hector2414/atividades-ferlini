//Hector-> 11, 13 e 22
//Contexto: Um programa deve ler as medidas dos lados de um tri�ngulo e
 //determinar se � um tri�ngulo equil�tero, is�sceles ou escaleno.
#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int l1,l2,l3;
	
	
	
	printf("Digite o primeiro lado do tri�ngulo:  ");
	scanf("%d",&l1);
	
	printf("Digite o segundo lado do tri�ngulo: ");
	scanf("%d",&l2);
	
	printf("Digite o terceiro lado do tri�ngulo: ");
	scanf("%d",&l3);
	
	
	
	if(l1 == l2 && l1 == l3){
		printf("Este � um tri�ngulo equil�tero!!!");
	} else if(l1 == l2 && l1 != l3){
		printf("Este � um tri�ngulo is�sceles!!!");
	} else{
		printf("Este � um tri�ngulo escaleno!!!");
	}
	
}

