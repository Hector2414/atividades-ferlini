#include <stdio.h>
#include <string.h>
#include <locale.h>

//4.Contar vogais: Escreva um programa que conte o n�mero de
//vogais em uma string.

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int tam,contVogal=0,i,total;
	char strg[100];
	
	
	printf("Digite algo: ");
	gets(strg);
	
	
	tam = strlen(strg);
	
	for( i = 0; i <= tam ; i++) {
		
	//	char letra = strg[i];
		
		switch(strg[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			      contVogal++;
				  break;
			default: printf(" "); 	
		}
		
	/**/	
		
	/*	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
		    letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
		    
			contVogal++;
				
		
		
		}*/
		
		
	
	}
	printf("\nN�mero de letras: %d", tam);
		printf("\nN�mero de vogais: %d", contVogal);
		
/*	printf("N�mero de vogais: %d",contVogal);
	return 0;*/
	
	
	
	
	
}
