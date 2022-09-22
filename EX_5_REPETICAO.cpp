//Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce  3  centímetros  por  ano.  Construir  um  algoritmo  que  calcule 
// e  imprima quantos anos serão necessários para que Juca seja maior que Chico.

#include <stdio.h>
#include <stdlib.h>

main(){
	float chico=1.5, ze=1.1;
	int ano=0;
	while(chico>=ze){
		chico+=0.02;
		ze+=0.03;
		ano++;
		printf("Chico: %2f\tZe: %2f\tAno: %d\n", chico, ze, ano);
	}
	printf("Sao necessarios %d anos\n\n", ano);
}
