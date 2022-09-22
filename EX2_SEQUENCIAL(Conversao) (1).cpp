#include <stdio.h>
main(){
	float N, VALOR_CM;
	printf("Digite um valor em polegadas para ser convertido em CM:");
	scanf("%f", &N);
	VALOR_CM=N*2.54;
	printf("O valor digitado equivale em centimetros a:%f", VALOR_CM);
}//fim

