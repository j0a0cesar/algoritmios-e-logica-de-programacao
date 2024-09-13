/*Crie uma estrutura de dados para representar um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Em seguida, crie um procedimento para ler os dados de 5
atletas fazendo uso de estrutura de repetição. Crie uma função para calcular e exibir em tela os
dados do atleta mais alto, retornando seu índice. Crie outra função para calcular e exibir em tela os
dados do atleta mais velho, retornando seu índice*/
#include <stdio.h>
typedef struct{
char nome[35];
char esporte[20];
int idade;
float altura;
}Atletas;
void ler(Atletas atleta[5]);
float MaisAlto(Atletas atleta[5]);
int MaisExperi(Atletas atleta[5]);

void ler(Atletas atleta[5]){
  int i;
  for(i=0;i<5;i++){
  printf("NOME:\n");
  scanf(" %34[^\n]", atleta[i].nome);
  printf("ESPORTE:\n");
  scanf(" %19[^\n]", atleta[i].esporte);
  printf("IDADE:\n");
  scanf(" %d",&atleta[i].idade);
  printf("ALTURA:\n\n");
    scanf(" %f",&atleta[i].altura);
  }
}
float MaisAlto(Atletas atleta[5]){
  int alto=0;
  for (int i = 1; i < 5; i++) {
      if (atleta[i].altura > atleta[alto].altura) {
          alto = i;
      }
  }
  printf("NOME: %s\n", atleta[alto].nome);
  printf("ESPORTE: %s\n",atleta[alto].esporte);
  printf("IDADE: %d\n", atleta[alto].idade);
  printf("ALTURA: %.2f\n", atleta[alto].altura);
  
  return alto;
}
int MaisExperi(Atletas atleta[5]){
  int i,velho=0;
  for(i=0;i<5;i++){
    if(atleta[i].idade > atleta[velho].idade){
      velho=i;
    }
  }
  printf("NOME: %s\n", atleta[velho].nome);
  printf("ESPORTE: %s\n",atleta[velho].esporte);
  printf("IDADE: %d\n", atleta[velho].idade);
  printf("ALTURA: %.2f\n", atleta[velho].altura);
  return velho;
  
}
int main(){
  Atletas atleta[5];
  
  ler(atleta);
  float alto = MaisAlto(atleta);
  int velho = MaisExperi(atleta);
  
  
  return 0;
}
