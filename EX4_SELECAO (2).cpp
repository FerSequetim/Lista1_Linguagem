//Ler as notas da 1a. e 2a. avalia��es de um aluno. Calcular a m�dia aritm�tica simples  e  escrever  uma  mensagem  que  diga  se  o  aluno  foi 
// ou  n�o  aprovado (considerar que nota igual ou maior que 6 o aluno � aprovado). Escrever tamb�m a m�dia calculada. 

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
