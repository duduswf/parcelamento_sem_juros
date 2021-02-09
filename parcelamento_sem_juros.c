// Algoritmo desenvolvido por Edaurdo Luiz Pontes de Souza
#include <stdio.h>

int main(void){
  int V = 0;  // Valor da compra
  int P = 0;  // Número de parcelas da compra
  int Plinhas = 0; // Número adequado de prints ou valor da sobra da divisão de V por P
  int i = 0;  // Auxiliar de controle

  printf("Insira o valor da compra: ");
  scanf("%i", &V);  // Inicializando a variável V

  do {
    printf("Insira o numero de parcelas: ");
    scanf("%i", &P);  // Inicializando a variável P

    if (P > 18){
      printf("So e permitido dividir em ate 18 vezes\n");
    }

  } while(P>18); // Controle do valor de parcelas não podendo ser maior que 18 vezes

  if(V % P == 0){ // Se o valor da variável V for divisível por P
    Plinhas = V/P;  // Inicializando a variável Plinhas responsável pelo print correto
    printf("\nO valor das compras e divisivel por P.");
    printf("\nValor das parcelas:\n");

    for (i = 1; i <= P; i++) {  // Controle de prin, printando Plinhas de i = 1 até a  i-ésima que é igual ao número de parcelas da compra
      printf("%i\n", Plinhas); // Printando o valor das parcelas nas quantidades adequadas
    }
  }else{  // Se o valor da variável V não for divisível por P
    printf("\nO valor das compras nao e divisivel por P.");
    Plinhas = V % P;  // Plinhas assume o valor do resto, ou seja, número de parcelas que terão valor maior

    printf("\nValor das parcelas:\n");

    for (i = 1; i <= Plinhas; i++) {
      printf("%i\n", V/P + 1); // Printando o valor das parcelas nas quantidades adequadas para compensar
    }

    for (i = 1; i <= P - Plinhas; i++) {
      printf("%i\n", V/P);  // Printando o valor das parcelas nas quantidades adequadas
    }
  }

	return 0;
}
