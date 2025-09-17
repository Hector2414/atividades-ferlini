//Contexto: Um sistema de aluguel de carros cobra uma taxa base mais uma
// taxa adicional por quilômetro rodado. Escreva um programa que calcule o
// valor total do aluguel com base nas informações fornecidas.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float kmRodados, total,txBase;
    
	
	txBase = 100.0; 
	 
    printf("Digite a quantidade de quilômetros rodados: ");
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
