//4) Solicite a idade da pessoa, at� que ela digite 0 e pare a execu��o.
//Valide todas as idade entre se est� entre 0 e 100 anos
#include <stdio.h>

int main() {
	
    int idade;

    printf("Digite sua idade (0 para sair): ");
    scanf("%d", &idade);

    while(idade != 0) {
        if(idade > 0 && idade <= 100) {
            printf("Idade valida: %d\n", idade);
        } else {
            printf("Idade invalida! Digite entre 0 e 100.\n");
        }

        printf("Digite sua idade (0 para sair): ");
        scanf("%d", &idade);
    }

   
}

