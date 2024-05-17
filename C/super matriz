#include<stdio.h>
  int main()
  {
  int vendas[5][4] = {
    {1,2,3,4},
    {10,20,30,40},
    {20,40,60,80},
    {30,60,90,500},
    {40,80,120,160}
  };
    int cod[5]  = {1,2,3,4,5}, i, j, indice = 0;
    float maior, medias, soma [5] = {0,0,0,0,0};
    char nomes [5][31] = { "João Gabriel Silva",
                           "Bruna Chapelin", 
                           "João Pádua",
                           "Rebecca Beccari",
                           "Matheus Santos" };
    
     printf("Os nomes dos funcionarios:\n");
    for (i=0; i<5; i++){
      printf("\n%d Vendedor(a) %s \n", cod[i], nomes[i]);
      for ( j = 0; j < 4 ; j++)  {
        printf("Valor das vendas do funcionario %d é igual: %d \n", cod[i], vendas[i][j]);
        soma[i] = soma[i] + vendas[i][j];
         } if ( soma[i] >  maior) {
           maior = soma[i];
           indice = i;
         } printf("A soma das vendas %.0f", soma[i]);
      }
    
     printf("\n\nO funcionario %d %s fez a maior venda no valor :%.0f,", cod[indice],nomes[indice], maior);
  
  return(0);
  }
