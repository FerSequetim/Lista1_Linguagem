//Fa�a  um  algoritmo  para  ler  o  c�digo  e  o  pre�o  de  15  produtos,  calcular  e escrever (n�o deve ser usado vetor): - o maior pre�o lido - 
//a m�dia aritm�tica dos pre�os dos produtos 

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
