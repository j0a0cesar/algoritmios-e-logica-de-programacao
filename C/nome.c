#include<stdio.h>
#include<string.h>

int main(){
 char name[100];
printf("Qual o seu nome? ");
 scanf("%100[^\n]", name);
 
 printf("Seja bem-vindo, %s", name);
 int i, cont=0;
 for(i=0; i< 100; i++){
 if(name[i] =='\0')
 break;
 cont++;
 }
 printf("\nA quantidade de letras do seu nome %s é:%d",name, cont);
 
 
 return 0;
