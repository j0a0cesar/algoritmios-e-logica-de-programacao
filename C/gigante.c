#include <stdio.h>
	 typedef struct{
 	char nome [31];
 	int dia, mes, ano;
 }Pessoas;
 typedef struct{
 	int dia;
 	int mes;
 	int ano;
 }Data;
 
 Data datahoje();
 
 Data datahoje(){
 	Data d;
 	
 	printf("\nInforme o dia:");
 	scanf(" %d",&d.dia);
 	printf("\nInforme o mes:");
 	scanf(" %d",&d.mes); 
	printf("\nInforme o ano:") ;
	scanf(" %d",&d.ano);
	return d;
	 }
	 
 /*int diadhoje(int dia){
 	
 	printf("\nInforme o dia: ");
 	scanf(" %d",&dia);
 	
 	return dia;
	}
    int mesdhoje(int mes){	 
 	printf("Digite o mes de hoje: ");
 	scanf(" %d",&mes);
 	
 	return mes;
	}
 	int anodhoje(int ano){
 	printf("digite o dia de hoje");
 	scanf(" %d",&ano);
 	
	return ano;
	}*/
 
void imprimeMes(int i){
	switch(i){
 	  	case 1:
 	  		printf("\n\nJANEIRO:");
 	  	break;
 	  	case 2:
 	  		printf("\n\nFEVEREIRO:");
 	  	break;
 	  	case 3:
 	  		printf("\n\nMARCO:");
 	  	break;
 	  	case 4:
 	  		printf("\n\nABRIL:");
 	  	break;
 	  	case 5:
 	  		printf("\n\nMAIO:");
 	  	break;
 	  	case 6:
 	  		printf("\n\nJUNHO:");
 	  	break;
 	  	case 7:
 	  		printf("\n\nJULHO:");
 	  	break;
 	  	case 8:
 	  		printf("\n\nAGOSTO:");
 	  	break;
 	  	case 9:
 	  		printf("\n\nSETEMBRO:");
 	  	break;
 	  	case 10:
 	  		printf("\n\nOUTUBRO:");
 	  	break;
 	  	case 11:
 	  		printf("\n\nNOVEMBRO:");
 	  	break;
 	  	case 12:
 	  		printf("\n\nDEZEMBRO:");
 	  	break;
	   }
}

 void mesbday(Pessoas n[], Data h){
 	int i,pMes;
 	  for(i = 0;i<=12;i++){
	   imprimeMes(i);
	    for(pMes =0;pMes<10;pMes++){
		 if(i == n[pMes].mes){
		 	int idade = h.ano -  n[pMes].ano;
		 	printf("\nNOME:%s| IDADE: %d", n[pMes].nome,idade);
		 	 printf("\n");
}	
}
}
}
int main(){

	Pessoas bday[10] = { "Joao Gabriel",  18,12,2006,
	                    "Bruna Chapelin",28,11,2005,
	                    "Joao Cesar",      9,10,2006,
	                    "Lucas Guimares", 10,9,1998,
	                    "Matheus Silva",  1,8,2005,
	                    "Rebecca Beccari",13,7,2006,
	                    "Luiz Cesar",     29,6,1977,
	                    "Rafaela Maria",  30,5,1987,
	                    "Giovana Timoteo",14,4,2019,
	                    "Iracema Pinto",  31,3,1954 };
	                    
 Data hoje;
 //pedir ao usuario a data de hoje.
hoje = datahoje();
  printf("\nDia: %d/ Mes: %d/ Ano: %d", hoje.dia,hoje.mes, hoje.ano);
  
  mesbday(bday,hoje);
	
	return 0;
}
