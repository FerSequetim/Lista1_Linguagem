//Entrar  com  um  número  inteiro  positivo  e  exibir  o  fatorial  deste  número, lembrando que 0! = 1. Exemplo: 5! = 5x4x3x2x1 = 120 

#include <stdio.h>
main(){
	int n, i, fat=1;
	printf("Digite um numero inteiro para calcular seu fatorial");
	scanf("%d", &n);
	for (i=n; i>1;i--){
		fat=fat*i;
	}
	printf("\nFatorial calculado: %d", fat);
	return 0;
}
