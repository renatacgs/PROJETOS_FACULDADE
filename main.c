//Aluna: Renata Cristina Gomes da Silva
//Codado e compilado pelo onlinegdb
#include <stdio.h>

int main() {
  int numero, positivo = 0, negativo = 0, multiplos = 0;
  float soma = 0, media = 0;
  printf("Digite uma lista de numeros inteiros, sendo o elemento finalizador do programa o numero 0:\n");

  do {
    scanf("%d", &numero);
      if (numero > 0) {
        positivo = positivo + 1;
          if (numero % 5 == 0) {
          multiplos = multiplos + 1;
          }}
        else if (numero < 0) {
          negativo++;
      }
      soma = soma + numero;
  } while (numero != 0);

    media = soma / (positivo + negativo);
  
  printf("\nQuantidade de numeros positivos: %d ; percentual: %.2f\n", positivo, (float) positivo / (positivo + negativo) * 100);
  printf("\nQuantidade de numeros negativos: %d ; percentual: %.2f\n", negativo, (float) negativo / (positivo + negativo) * 100);
  printf("\nMedia aritmetica: %.2f\n", media);
  printf("\nQuantidade de numeros positivos multiplos de 5: %d\n", multiplos);

return 0;

}
