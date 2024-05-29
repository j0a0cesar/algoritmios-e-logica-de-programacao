/*Escreva um programa que tenha uma função que receba dois números inteiros do teclado e retorne
a soma dos números existentes entre eles.
Use escopo local para as variáveis.
Faça a validação dos números de entrada para sempre calcular a soma a partir do menor número
informado.
*/
#include <stdio.h>
int somaNums(int *num1, int *num2) {
 
 int i,soma =0 ;
 printf("informe o numero de inicio: ");
 scanf("%d", num1);
 printf("informe o numero de fim: ");
 scanf("%d", num2);
 
 for(i = *num1; i <= *num2; i++){
 soma = soma + i;
 }
 return soma;
}
int main() {
 
 int soma, num1, num2;
 
 soma = somaNums(&num1, &num2);
 printf("A soma dos números entre %d e %d é: %d\n",num1,num2,soma);
 return 0;
}
