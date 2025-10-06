#include <stdio.h>
#include <locale.h>
#include <string.h>


//3.Verificar palíndromos: Implemente um programa que
// verifique se uma string é um palíndromo ou não. Um
// palíndromo é uma palavra ou frase que permanece igual se
//lida de trás para frente.

int main(){

    setlocale(LC_ALL,"portuguese");
    
    char str[30];
    int n = 0, flag = 0, i = 0, j = 0;
    
    printf("Digite algo:");
    gets(str);
    
    n = strlen(str);
    
    for (i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Não é um palíndromo");
    else
        printf("É um palíndromo");	
	
	
	

	
	
	
}
