#include <stdio.h>
//variaveis
int main(){
 
 int  ent, num[5] = {2,4,6,8,10};

// alimenta a estrutura de dados de idades 
 printf("Digite um numero:");
  scanf(" %d", &ent);


for (int i = 0; i < 5; i++) {
    if (ent == num[i]) {
        printf("O numero %d esta na posicao %d do vetor.\n", ent, i);
    }
else {
    printf("O numero digitado não foi encontrado.\n");
}
} 
  
return 0;
}  
