#include <stdio.h> 
int main() { 
 int lata3, lata6, garraf2;
 float totalR; 
   printf("A quantidade de latas de refrigerante de 350ml que comprou:"); 
   scanf("%d", &lata3); 
   printf("A quantidade de latas de refirgerante de 650ml que comprou:"); 
   scanf("%d", &lata6); 
   printf("A quantidade de garrafas de refrigerante de 2L que comprou:"); 
   scanf("%d", &garraf2); 
 totalR= (lata3* 0.35)+ (lata6*0.6)+ (garraf2 *2); 
   printf("\n Com %d lata(as) de 350ml mais %d lata(as) de 600ml e mais %d garrafa(as) de 2L o total de litos de refrigerante que comprou foi de: %0.2f ",lata3, lata6, garraf2, totalR); 
   
 return 0; 
}
