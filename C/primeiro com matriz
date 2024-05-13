
#include <stdio.h>
#include <string.h>
int main() {
 char name[10][31];
 int i,j,contA;
for(i = 0; i < 10; i++){
printf("\nDigite o seu nome? ");
 scanf(" %30[^\n]", name[i]);
}
 for(i = 0; i < 10; i++){
 for(j = 0; j < strlen(name[i]); j++ ){
 if(name[i][j] == 'a' || name[i][j] == 'A')
 
 contA++;
 
 }printf("\nNome: %s, Tamanho: %d, com %d caracteres 'a'", name[i], strlen(name[i]), 
contA);
 contA=0;
}
 
 return 0;
}
