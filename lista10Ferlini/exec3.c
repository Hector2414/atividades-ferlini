#include <stdio.h>
#include <locale.h>
#include <string.h>


//3.Verificar pal�ndromos: Implemente um programa que
// verifique se uma string � um pal�ndromo ou n�o. Um
// pal�ndromo � uma palavra ou frase que permanece igual se
//lida de tr�s para frente.

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
        printf("N�o � um pal�ndromo");
    else
        printf("� um pal�ndromo");	
	
	
	

	
	
	
}
