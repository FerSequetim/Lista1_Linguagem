//Faça  um  algoritmo  para  ler  o  código  e  o  preço  de  15  produtos,  calcular  e escrever (não deve ser usado vetor): - o maior preço lido - 
//a média aritmética dos preços dos produtos 

#include <stdio.h>

main(){
	int codigo, i;
	float preco, maiorPreco, soma = 0;

		for(i=1; i <=15; i++){
			printf("Digite o codigo do produto:");
			scanf("%d", &codigo);
			printf("Digite o preco do produto:");
			scanf("%f", &preco);
			soma=soma+preco;
			
			if(preco>maiorPreco){
				maiorPreco=preco;
			}
		}
	printf("Maior preco e o %.2f", maiorPreco);
	printf("Media dos precos e %.2f", soma/15);
}
