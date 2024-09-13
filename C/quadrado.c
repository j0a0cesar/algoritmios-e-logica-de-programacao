#include<stdio.h>
int main()
{
int i, j, lado;

  printf("Informe o tamanho do quadrado: ");
  scanf("%d", &lado);
 if(lado > 0 && lado < 20) {
  for ( i = 0; i < lado; i++ ){
    for ( j = 0; j < lado; j++ ){
      printf("*");
    }printf("\n");
  }
  
 }else{
   printf("tente novamente.");
 }
  return 0;
    }
