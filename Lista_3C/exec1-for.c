//1)Solicite a idade de 3 pessoas e apresente a
 //media das idades,a
//maior e a menor.

#include <stdio.h>
#include <locale.h>

int main() {
  
  int idade,i;
  float media = 0;
  
  for(i = 0; i < 3;i++){
  
    printf("Digite uma idade: ");
    scanf("%d",&idade);
    media += idade;
  }
  
  printf("A média dessas idades é: %f",media/3);
  
  
  
}