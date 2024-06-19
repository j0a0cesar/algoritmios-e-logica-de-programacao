#include <stdio.h>
typedef struct{
 char nome [31];
 int numeroC;
 float saldoi;
 }Conta;

void imprimeMenu();
void listarClientes(Conta c[]);
void realizaOperacao(int op, Conta clientes[]);
void deposita( int op, Conta clientes[]);
void sacar(int op, Conta clientes[]);
void imprimeMenu(){

 printf("\n\nMENU DE OPERACOES BANCARIAS\n");
 printf("\nDigite um numero de 1 a 5 para escolher a opcao");
 printf("\n[1] Listagem de clientes\n[2] Depósito\n[3] Saque\n[4] Fim");
 printf("\n\nInfomer a operacao:");


}
void listarClientes(Conta c[]){
 int i;
 for (i = 0; i <6;i++){
 printf("\n%d\t%s\t%.2f", i+1 ,c[i].nome,c[i].saldoi);
}
}
void realizaOperacao(int op, Conta clientes[]){
 switch(op){
 case 1:
 listarClientes(clientes);
 break; 
 case 2:
 deposita(op, clientes);
 break;
 case 3:
     sacar(op, clientes);
 break;
 case 4:
 printf("\n\nVoce escolheu SAIR!\nO programa sera encerrado");
 break;
 default :
 printf("\n\nOperacao invalida\n\nINforme uma operacao valida");
}
}
void deposita(int op, Conta clientes[]){
    int Cnumber;
    float vdeposito;
    printf("Qual o numero da conta do deposito:");
    scanf(" %d", &Cnumber);
    for(int i=0;i<6;i++){
    if(Cnumber ==clientes[i].numeroC){
        printf("Qual o valor do deposito:");
        scanf(" %f", &vdeposito);
        clientes[i].saldoi = clientes[i].saldoi + vdeposito;
        printf("\nDEPOSITO EFETUADO\nPARA:%s", clientes[i].nome);
}
}
}
void sacar(int op, Conta clientes[]){
    int Cnumber;
    float vsaque;
    printf("Qual o numero da conta do saque:");
    scanf(" %d", &Cnumber);
    
    for(int i=0;i<6;i++){
        if(Cnumber ==clientes[i].numeroC ){
    printf("Qual o valor do saque:");} 
    scanf(" %f", &vsaque);
    if(clientes[i].saldoi >= vsaque){
        clientes[i].saldoi = clientes[i].saldoi - vsaque;
        printf("\nSAQUE EFETUADO\nVALOR:%.2f\nSALDO ATUALIZADO:%.2f", vsaque,clientes[i].saldoi);
}
}
}
int main (){
 Conta clientes[6] = { "Joao Gabriel", 1234,1000.0,
                        "Bruna Chapelin", 2810,2000.0,
                        "Cesar Padua", 1409,3000.0,
                        "Matheus Silva", 4208,4000.0,
                        "Rebecca Beccari", 5607,5000.0,
                        "Victor Furlaneto", 7006,6000.0 };

 int op; 

 do{

 imprimeMenu();
 scanf(" %d", & op);

 realizaOperacao(op, clientes);


}while(op!=4);


 return 0;
}
