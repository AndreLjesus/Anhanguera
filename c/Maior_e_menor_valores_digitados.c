#include <stdio.h>

int main(void){

  int n = 0;
  int maior = 0;
  int menor = 0;
  int inicio = 0;

  while (inicio < 20){
  printf("Digite um numero: --- ");
  scanf("%d", &n);

  if (inicio == 0){
    maior = n;
    menor = n;
  }

  else{
    if (n < menor){
      menor = n;
    }
    if(n > maior){
      maior = n;
    }
    
  }

  inicio = inicio + 1;
  }
  
  printf("\nMaior numero encontrado: %d\n", maior);
  printf("Menor numero encontrado: %d", menor);
  return 0;
}
