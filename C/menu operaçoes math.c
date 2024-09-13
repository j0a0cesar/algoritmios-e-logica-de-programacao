#include <stdio.h>
int main() {
 int cod;
 float val1, val2, r1, r2, r3, r4;
   printf("Informe o código para uma das operações matemáticas\n 1 para adição; \n 2 para subtração;\n 3 para multiplicação; \n 4 para divisão. \n"); 
   scanf("%d", &cod);
   printf("digite um valor :");
   scanf("%f", &val1);
 
   printf("digite um outro valor :");
   scanf("%f", &val2);
 
 switch(cod){
 case 1:
 r1 = val1 + val2;
 printf("A operação matemática é adição e o resultado entre o valores %0.2f e %0.2f é igual a:%0.2f", val1, val2, r1);
 break;
 
 case 2: 
 r2 = val1 - val2;
 printf("A operação matemática é subtração e o resultado entre o valores %0.2f e %0.2f é igual a:%0.2f" ,val1, val2, r2);
 break;
 
 case 3:
 r3 = val1 * val2;
 printf("A operação matemática é multiplicação e o resultado entre o valores %0.2f e %0.2f é igual a:%0.2f", val1, val2, r3);
 break;
 
 case 4:
 if (val2 != 0){
 r4 = val1 / val2 ;
 printf("A operação matemática é divisão e o resultado entre o valores %0.2f e %0.2f é igual a:%0.2f", val1, val2, r4);
 
 } else {
 printf("A operação é inválida.");
 }
 
 break;
 
 default :
 printf(" O código é inválido.");
 }
 return 0;
}
