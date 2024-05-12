#include <stdio.h>
int main() {
 float sa, ns;
 int ts;
 float rea = 0;
 int bo = 0;
   printf("Qual a quantidade o seu salario atual:");
   scanf("%f", &sa);
   printf("Quanto tempo de serviço você tem na empresa, em anos: ");
   scanf("%d", &ts);
 
 if (sa <= 500){
   rea = 0.25 *ns;
 }
 else if ( sa > 500 && sa <=1000 ){
   rea = 0.2 * sa ;
 }
 else if( sa > 1000 && sa <=1500 ){
   rea = 0.15 * sa ;
 }
 else if( sa > 1500 && sa <=2000 ){
   rea = 0.1 * sa ;
 }
 else{
   rea = 0;
 }
 
 if (ts < 1){
   bo = 0;
 }
 else if( ts > 1 && ts <=3 ){
   bo = 100 ;
 }
 else if( ts > 4 && ts <=6 ){
   bo = 200 ;
 }
 else if( ts >7 && ts <=10 ){
   bo = 300 ;
 }else{
   bo = 500;
 } 
 ns = sa + rea + bo;
 
   printf("\n O valor do seu novo salário é de:%0.2f", ns);
   printf("\n O valor do reajuste é :%0.2f", rea);
   printf("\n O valor do seu bônus foi de: %d", bo );
 
 return 0;
}
