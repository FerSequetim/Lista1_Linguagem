#include <stdio.h>
main(){
	float VALOR_PAGO, VALOR_COMPRA;
	int TIPO_CLI;
	printf("Digite o valor total da compra:");
	scanf("%f", &VALOR_COMPRA);
	printf("Tipo comprador: 1-cliente comum; 2-funcionario, 3-VIP - (Digite 1, 2 ou 3:)");
	scanf("%d", &TIPO_CLI);
	if(TIPO_CLI==1){
		printf("Cliente comum - sem desconto");
		VALOR_PAGO=VALOR_COMPRA;
		printf("Valor a pagar %.2f", VALOR_PAGO);
	}else if (TIPO_CLI==2){
		VALOR_PAGO=VALOR_COMPRA-(VALOR_COMPRA*0,10);
		printf("Valor a pagar %.2f", VALOR_PAGO);
	}else if (TIPO_CLI==3){
		VALOR_PAGO=VALOR_COMPRA-(VALOR_COMPRA*0,05);
		printf("Valor a pagar %.2f", VALOR_PAGO);
	}
		
}//FIM
