/*Escreva um programa que tenha uma função “troco” que solicite ao usuário o nome de um produto,
o preço desse produto e o valor em dinheiro entregue a um vendedor, armazene os dados em
variáveis globais, e retorne o valor do troco.
Em seguida, deve ser mostrada uma mensagem baseada no seguinte exemplo:
"Você comprou o produto (mouse) por R$ 185,00 e entregou ao vendedor R$ 200,00 em dinheiro.
Você vai receber R$ 15,00 de troco. Volte sempre!".
No mesmo programa anterior, crie uma função “desconto” que solicite ao usuário o nome e o preço
de um produto, armazene os dados em variáveis globais, e retorne o valor do desconto.
Em seguida, deve ser mostrada uma mensagem baseada no seguinte exemplo:
“Você comprou um produto (mouse) por R$ 185,00 e acaba de ganhar um desconto de 10%.
Assim você vai pagar apenas R$ 166,50 pelo seu produto. Volte sempre!”*/

#include <stdio.h>
#include <locale.h>


float troco();
float desconto();

char produto[30];
float preco, valor, desconto1;

/*float troco(){
	printf("Qual o nome do produto: ");
	scanf("%30[^\n]", produto);
	printf("Informe o valor do produto: ");
	scanf(" %f", &preco);
	printf("Qual o valor que voce entregou ao vendedor: ");
	scanf(" %f", &valor);
	
	troco1 = valor - preco;
	
	return troco1;
}*/
float desconto(){
	printf("Qual o nome do produto: ");
	scanf("%30[^\n]", produto);
	printf("Informe o valor do produto: ");
	scanf(" %f", &preco);
	printf("Qual o valor que voce entregou ao vendedor: ");
	scanf(" %f", &valor);
	
	desconto1 = preco * 0.1;
	preco = preco *0.9;
	
	return desconto1;
}

int main(){
	
printf("Voce comprou o produto %s, por R$%.1f e entregou ao vendedor R$ %.1f em dinheiro /nVoce vai receber R$ %.1f de desconto> Obrigado, Volte sempre!  ",produto, preco,valor,desconto());
	
	return 0;
}
