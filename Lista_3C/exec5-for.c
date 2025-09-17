//5) Solicite 15 números (apenas entre 10 e 50) e apresente
//posteriormente a média deles

#include <stdio.h>

int main() {
	
    int i, num;
    int soma = 0;
    int count = 0;

    for(i = 1; i <= 15; i++) {
        do {
            printf("Digite o %dº numero (entre 10 e 50): ", i);
            scanf("%d", &num);

            if(num < 10 || num > 50) {
                printf("Numero invalido! Tente novamente.\n");
            }
        } while(num < 10 || num > 50);

        soma += num;
        count++;
    }

    printf("Media dos numeros = %.2f\n", (float)soma / count);

    
}

