//1)Solicite a idade de 3 pessoas e apresente a
 //media das idades,a
//maior e a menor.

#include <stdio.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "portuguese");
  
  int i,idade;
  float media = 0.0;
  
  while(i < 3){
  
    printf("Digite uma idade: ");
    scanf("%d",&idade);
    media+= idade;
    
    i++;
    
  }
  
  printf("A média dessas idades é: %f",media/3);
} 