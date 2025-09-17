//Contexto: Um sistema de aluguel de carros cobra uma taxa base mais uma
// taxa adicional por quil�metro rodado. Escreva um programa que calcule o
// valor total do aluguel com base nas informa��es fornecidas.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float kmRodados, total,txBase;
    
	
	txBase = 100.0; 
	 
    printf("Digite a quantidade de quil�metros rodados: ");
    scanf("%f", &kmRodados);

    if (kmRodados <= 100) {
        total = txBase;
    } else if (kmRodados <= 200) {
        total = txBase + (kmRodados * 1.5);
    } else {
        total = txBase + (kmRodados * 2.5);
    }

    
    printf("Valor total do aluguel: R$ %f", total);

    

    
}
