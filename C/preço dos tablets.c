// // Suponha que você está fazendo uma pesquisa de preços para a compra de um tablet. Para auxiliá-lo,escreva um programa que permita o cadastro de cinco registros, cada um contendo o nome de uma loja e o preço do tablet naquela loja. O programa deve calcular a média dos preços e mostrar uma relação contendo o nome das lojas que tenham o tablet com preço abaixo da média

#include <stdio.h>
typedef struct{        //REGISTRO tablet{
    char loja[35];     //CARACTERE: loja[35];
    float preco;      //REAL: preco;
} Tablet;              //};
void lerDados(Tablet tablet[5]);
void processarDados(Tablet tablet[5], float media);
void lerDados(Tablet tablet[5]){
int i;
    for(i=0;i<5;i++){
        printf("Digite o nome da loja: ");
        scanf(" %34[^\n]", tablet[i].loja);
        printf(" A loja %s\n", tablet[i].loja);
        printf("Digite o valor do tablet nesse loja:");
        scanf(" %f",&tablet[i].preco);
    }
}
void processarDados(Tablet tablet[5],float media){
    int i;
    for(i=0;i<5;i++){
        media = (tablet[0].preco+tablet[1].preco+tablet[2].preco+tablet[3].preco+tablet[4].preco)/5; 
        
        if(tablet[i].preco< media){
            printf("LOJA:%s\nPRECO:%.2f\n",tablet[i].loja, tablet[i].preco);
        }
    
    }
}
int main() {
    Tablet tablet[5];
    float media;
    
    lerDados(tablet);
    processarDados(tablet, media);
    
    return 0;
}
