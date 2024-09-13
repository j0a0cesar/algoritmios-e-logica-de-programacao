#include <stdio.h>
int main() {
 int opcao;
 
do {
 printf("\n\nDigite um número de 1 a 5, para escolher uma opção no menu:\n [1]INSERIR\n [2]EXCLUIR\n [3]CONSULTAR\n [4]LISTAR\n [5]SAIR\n");
 scanf(" %d", &opcao);
 
 switch (opcao)
 {
 case 1:
 printf("INSERIR");
 break;
 
 case 2:
 printf("EXCLUIR");
 break;
 case 3:
 printf("CONSULTAR");
 break;
 case 4:
 printf("LISTAR");
 break;
 case 5:
 printf("SAIR");
 break;
 
 default:
 printf("Opção Invalida");
 
 }
 
 }
while (opcao != 5);
return 0;
}
