//5) Solicite 15 n�meros (apenas entre 10 e 50) e apresente
//posteriormente a m�dia deles

#include <stdio.h>

int main() {
	
    int i = 1, num;
    int soma = 0;
    int count = 0;

    while(i <= 15) {
        do {
            printf("Digite o %d� numero (entre 10 e 50): ", i);
            scanf("%d", &num);

            if(num < 10 || num > 50) {
                printf("Numero invalido! Tente novamente.\n");
            }
        } while(num < 10 || num > 50);

        soma += num;
        count++;
        i++;
    }

    printf("Media dos numeros = %.2f\n", (float)soma / count);

    
}

