#include <stdio.h>
#define C_MACA 1.30
#define CMACADUZIA 1.00
main(){
	float CUSTO;
	int QTD;
	printf("Qual a quantidade de macas compradas?");
	scanf("%d", &QTD);
	if(QTD<12){
		CUSTO= QTD * C_MACA;
	}else{
		CUSTO=QTD * CMACADUZIA;
	}
	printf("O custo das macas compradas sera de %f", CUSTO);
}//fim
