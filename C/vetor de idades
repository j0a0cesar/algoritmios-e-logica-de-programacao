#include <stdio.h>
//variaveis
int main(){
 int indice,menor = 999, maior = 0,soma  = 0, media = 0, idade [5] = {55,44};

// alimenta a estrutura de dados de idades 
for (indice = 0; indice < 5; indice ++) {
 printf("Informe a idade [%d]", indice);
 scanf("%d", &idade[indice]);
 }

// exibe as idades armazenadas em oredem
for(indice = 0; indice < 5; indice ++) {
 printf("\n Na ordem idade [%d] = %d", indice, idade[indice]);
 }

// exibir as idades em ordem inversa
for(indice = 4; indice >= 0; indice --){
 printf("\n Na ordem inversa idade [%d] = %d", indice, idade[indice]);
 }

// apresentar as idades em grupos de pares e impares 
for(indice = 0; indice < 5 ; indice ++){
if (idade[indice] % 2 == 0)
 printf("\nIdades par [%d] = %d", indice, idade[indice]);
 }
 for (indice = 0; indice < 5; indice ++){

if (idade[indice] % 2 == 1)
 printf("\nIdades impar [%d] = %d", indice, idade[indice]);
 }

// apresentar as idades maiores e as menores
  for (indice = 0; indice < 5; indice ++) {
  if (idade[indice] > maior)
      maior = idade[indice];
    
  if (idade[indice] < menor)
      menor = idade[indice];
  } 
  printf("\nA maior idade é: %d", maior);
  printf("\nA menor idade é: %d", menor);
  
// soma dos vetores(idades)
  soma = idade [0] + idade[1] + idade[2] + idade[3] + idade[4];

    printf("\nA soma das idades é: %d", soma);

// media dos vetores(idades) 
  media = soma / 5;
  printf("\nA media das idades é: %d", media);
  
return 0;
}  
