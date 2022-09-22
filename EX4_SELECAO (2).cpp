//Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples  e  escrever  uma  mensagem  que  diga  se  o  aluno  foi 
// ou  não  aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada. 

#include <stdio.h>
main(){
	float NOTA1, NOTA2, MEDIA;
	printf("Digite a primeira nota:");
	scanf("%f",&NOTA1);
	printf("Digite a segunda nota:");
	scanf("%f", &NOTA2);
	MEDIA=(NOTA1+NOTA2)/2;
	if(MEDIA>=6){
		printf("Aprovado com media %.2f", MEDIA);
	}else{
		printf("Reprovado com media %.2f", MEDIA);
	}
	
}//fim
