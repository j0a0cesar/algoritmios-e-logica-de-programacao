#include <stdio.h>
// declarar as variaveis 
int main() {
 float sal = 1, media_p = 0, media_h = 0, media_m = 0;
 int contp = 0, homens = 0, mulheres = 0;
 char sexo = 0, renda;
   printf("Digite o sexo e o salario, em seguida digite 0 para finalizar. \n");
//Teste pra estrutura de repetição
 while(sal >= 1){
  
   printf("\nDigite o salario: ");
   scanf("%f", &sal);
 if (sal > 100000) 
   printf("Salario invalido. Digite um valor entre 0 e 100.000.\n");
   printf("\nDigite o sexo ('M' ou 'F'): \n");
   scanf(" %c", &sexo);
   
   //Teste para estrutura condicional
 if (sexo != 'M' && sexo != 'F') 
   break;
   contp++;
   
 if(sexo == 'M'){
   homens++;
   media_h = media_h + sal;
   
  } else{
   mulheres++;
   media_m = media_m + sal;
   }
   } 
 //Calculo das medias 
   media_p = (float) (media_h + media_m) / contp;
   media_h = (float) media_h / homens;
   media_m = (float) media_m / mulheres;
 //Mostrar os resultados
   printf("\nO total de pessoas é: %d", contp); 
   printf("\nA quantidade de homens é: %d", homens);
   printf("\nA quantidade de mulheres é: %.d", mulheres);
   printf("\nA média salarial é: %.2f", media_p);
   printf("\nA média salarial dos homens é: %.2f", media_h);
   printf("\nA média salarial das mulheres é: %.2f", media_m);
   
 if (media_p < 1500){
   printf("\nGrupo com renda BAIXA");
   
 }else if (media_p >= 1500 && media_p <= 5000){
   printf("\nGrupo com renda MEDIA");
   
 }else if (media_p >5000 && media_p <100000) {
   printf("\nGrupo com renda ALTA");
   
 }else {
   printf("\nGrupo com renda INVALIDA");
   
 }
 return 0

 }
