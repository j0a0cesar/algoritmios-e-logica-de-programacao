#include <stdio.h>
int main(){
 int senha, num, contador;
 senha=2024;
 contador=1;
 num = 1;
 
 
 while(num != senha){ 
 
 printf("Digite uma senha:");
 scanf("%d", &num);
 
 if (num != senha){
 printf("ACESSO NEGADO\n");
 } 
 
 if(contador >= 3 ) {
 printf("três tentativas incorretas, acesso negado.\n crie uma nova senha.");
 scanf("%d", &senha);
 contador = 0;
 num=0;
 
 }
 contador++;
 }
 printf("Senha correta, acesso permitido!");
 
 
 return 0;
}
