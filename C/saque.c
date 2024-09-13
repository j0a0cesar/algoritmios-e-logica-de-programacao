
#include <stdio.h> 
int main()
{
int not100, not50, not20, not10, not5, resto, saque;
  printf("Qual o valor do seu saque: ");
  scanf("%d", &saque);
resto = saque % 100;
not100 = saque / 100;
not50 = resto / 50;
resto = resto % 50;
not20 = resto / 20;
resto = resto % 20;
not10 = resto/ 10;
resto = resto % 10;
not5= resto / 5;
resto = resto % 5;
  printf("A quantidade de notas de 100:%d", not100);
  printf("\nA quantidade de notas de 50:%d", not50);
  printf("\nA quantidade de notas de 20:%d", not20);
  printf("\nA quantidade de notas de 10:%d", not10);
  printf("\nA quantidade de notas de 5:%d", not5);
  return 0;
}
