#include <stdio.h>
int main (){
 int idd=1, maior, menor, soma=0, cont=0;
 float media;
 
 menor = 1000;
 maior = 0; 
 
 printf("\nDigite a idade do seu grupo, e digite 0 para encerrar: ");
 
 while (idd != 0){ 
 printf("\n\nDigite a idade : ");
 scanf(" %d", &idd);
 
 if (idd == 0){
 break;
 }
 if (idd > 0){
 cont++;
 soma = soma + idd;
 
 if (menor > idd ){
 menor = idd;
 }
 if (maior < idd){
 maior = idd;
 }
 }
 else{
 printf("\nERR0!");
 }
 
 } 
 media = (float) soma / cont;
 
 printf("O numero de pessoas e: %.d", cont);
 printf("\nA idade media e: %.2f", media);
 printf("\nA menor idade e: %.d", menor);
 printf("\nA maior idade e: %.d", maior);
  
 return 0;
  }
