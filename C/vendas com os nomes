#include<stdio.h>
  int main()
  {
  int vendas[5][4]; /* = {
    {1,2,3,4},
    {10,20,30,40},
    {20,40,60,80},
    {30,60,90,500},
    {40,80,120,160}
  };*/
    int cod[5]  = {1,2,3,4,5}, i,j, indice = 0;
    float maiorm = 0, maior = 0, media [5] = {0,0,0,0,0}, soma [5] = {0,0,0,0,0};
    char nomes [5][31]; /* = { "João Gabriel Silva",
                           "Bruna Chapelin", 
                           "João Pádua",
                           "Rebecca Beccari",
                           "Matheus Santos" };*/
    for (i = 0; i < 5; i++){
      
        printf("\n Digite o seu nome: ");
        scanf(" %[^\n]", nomes[i]);
    }
    
    for(i = 0; i < 5; i++){
      for(j =0; j < 4; j++){
        printf("Digite o valor da venda[%d][%d]=", i, j);
        scanf(" %d", &vendas[i][j]);
    
      } printf("\n");
    }
     printf("Os nomes dos funcionarios:\n");
    
    for (i=0; i<5; i++){
      printf("\n%d Vendedor(a) %s \n", cod[i], nomes[i]);
      
      for ( j = 0; j < 4 ; j++)  {
        printf("Valor das vendas do funcionario %d é igual: %d \n", cod[i], vendas[i][j]);
       
        soma[i] = soma[i] + vendas[i][j];
         } if ( maior < soma[i]) {
           maior = soma[i];
           indice = i;
         }
        media[i] = soma[i]/4;
      if (maiorm < media[i]){
        maiorm = media[i];
      }
      
      printf("A soma das vendas %.0f", soma[i]);
      printf(" \nA media das vendas %.2f", media[i]);
      }
    
     printf("\n\nO funcionario %d %s fez a maiores vendas no valor total de:%.0f,", cod[indice],nomes[indice], maior);
    printf("\n\nO funcionario %d %s teve a melhor media de vendas no valor:%.2f,", cod[indice],nomes[indice], maiorm);
  
  
  return(0);
  }
