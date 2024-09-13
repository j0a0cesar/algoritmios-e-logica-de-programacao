
#include <stdio.h>
int main() 
{
 float votV, votB, votN, totalV , pctV, pctB, pctN;
   printf("Qual a quantidade de votos validos: ");
   scanf("%f", &votV);
   printf("Qual a quantidade de votos em branco: ");
   scanf("%f", &votB);
   printf("Qual a quantidade de votos nulos: ");
   scanf("%f", &votN);
 totalV= votV + votB + votN ;
 pctV= (votV/totalV);
 pctB= (votB/totalV);
 pctN= (votN/totalV);
   printf("A quantidade de votos validos foi de: %0.2f e sua porcetagem é: %0.2f", 
votV, pctV);
   printf("\n A quantidade de votos em branco foi de: %0.2f e sua porcetagem é: 
%0.2f", votB, pctB);
   printf("\n A quantidade de votos nulos foi de: %0.2f e a sua porcetagem é: %0.2f", 
votN, pctN);
   printf("\n O total de votos foi de: %0.2f", totalV);
 return 0;
}
