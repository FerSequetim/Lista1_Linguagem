//Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
//  infantil A = 5 - 7 anos  infantil B = 8-10 anos  juvenil A = 11-13 anos  juvenil B = 14-17 anos  adulto = maiores de 18 anos  
#include <stdio.h>
main(){
	int IDADE;
	printf("Digite a idade do nadador:");
	scanf("%d", &IDADE);
	if ((IDADE>=5) && (IDADE<=7)){
		printf("Nadador infantil A");
	}else if((IDADE>=8)&& (IDADE<=10)){
		printf("Nadador infantil B");		
	}else if((IDADE>=11)&& (IDADE<=13)){
		printf("Nadador juvenil A");
	}else if((IDADE>=14)&& (IDADE<=17)){		
		printf("Nadador juvenil B");
	}else if(IDADE>=18){	
		printf("Nadador adulto");
	}
		
}// fim

