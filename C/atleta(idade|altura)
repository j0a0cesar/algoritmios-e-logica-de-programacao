/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Em seguida, leia os dados de 5 atletas. Calcule e exiba os nomes do atleta mais alto e do atleta mais velho. */


#include <stdio.h>
typedef struct{        //REGISTRO 
    char nome[35];          //CARACTERE: nome[35];
    char modalidade[35];   //CARACTERE: modalidade[35];
    int idade;             //INTEIRO: idade;
    float altura;         // REAL: altura
} Atleta;               //};

void lerDados(Atleta atleta[5]);
void DadosAltura(Atleta atleta[5], float mediaH);
void DadosIdade(Atleta atleta[5], float mediaI);
void lerDados(Atleta atleta[5]){
int i;
    for(i=0;i<5;i++){
        printf("NOME: ");
        scanf(" %34[^\n]", atleta[i].nome);
        
        printf("MODALIDADE: ", atleta[i].modalidade);
        scanf(" %34[^\n]", atleta[i].modalidade);
        
        printf("IDADE: ");
        scanf(" %d", &atleta[i].idade);
        
        printf("ALTURA: ");
        scanf(" %f",&atleta[i].altura);
    }
}
void DadosAltura(Atleta atleta[5],float mediaH){
    int i;
    for(i=0;i<5;i++){
        mediaH = (atleta[0].altura+atleta[1].altura+atleta[2].altura+atleta[3].altura+atleta[4].altura)/5;
        
        if(atleta[i].altura>mediaH){
            printf("\nNOME: %s\nALTURA: %.2f\n",atleta[i].nome,atleta[i].altura);
        }
    }
}
void DadosIdade(Atleta atleta[5], float mediaI){
    int i;
    for(i=0;i<5;i++){
        mediaI= (atleta[0].idade+atleta[1].idade+atleta[2].idade+atleta[3].idade+atleta[4].idade)/5;
        if(atleta[i].idade>mediaI){
           printf("\nNOME: %s\nIDADE: %d\n",atleta[i].nome, atleta[i].idade);
       }
    }
}
int main() {
    Atleta atleta[5];
    float mediaH,mediaI;
    
    lerDados(atleta);
    DadosAltura(atleta, mediaH);
    DadosIdade(atleta,mediaI);
    
    return 0;
}
