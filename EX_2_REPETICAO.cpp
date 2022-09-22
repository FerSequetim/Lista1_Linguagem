//Fazer um programa para encontrar todos os pares entre 1 e 38.  
#include<stdio.h>
main(){
	for(int number=1; number<38; number++){
		if(number %2==0){
			printf("%d\n", number);
		}
	}
	return 0;
}
