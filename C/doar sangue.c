#include <stdio.h>
#include <string.h> 

int main()
{
char doente, alimentado, nome[20];
int idade;
float kg;

  printf("Informe seu primeiro nome: ");
  scanf(" %s", nome);

  printf("Informe a sua idade: ");
  scanf(" %d", &idade);

  printf("Digite o seu peso: ");
  scanf(" %f", &kg);

  printf("Você está doente? 'S' para sim e 'N' para não: ");
  scanf(" %c", &doente);

  printf("Você está alimentado? 'S' para sim e 'N' para não: ");
  scanf(" %c", &alimentado);

 if(idade > 15 && idade < 70 && kg >= 50 && (doente == 'N'|| doente == 'n') && (alimentado == 'S'||alimentado == 's')){
   printf("Você pode doar sangue %s;\nOs bancos de sangue agradecem pela sua atitude.", nome);

 } else {
   printf("Você não pode doar sangue %s;\nObrigado.", nome);
 }


return 0;
}
