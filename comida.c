#include <stdio.h>

int main(){
	int codigo, quantidade;
	float cachorro, xsalada, xbacon, torrada, refrigerante, total;
	
	scanf("%d %d", &codigo, &quantidade);

	cachorro = 4.00;
	xsalada = 4.50;
	xbacon = 5.00;
	torrada = 2.00 ;
	refrigerante = 1.50;

	if (codigo == 1){

		total = cachorro * quantidade;
		printf("Total: R$ %.2f\n", total);

	}

	else if (codigo == 2){
		total = xsalada * quantidade;
		printf("Total: R$ %.2f\n", total);


	}

	else if (codigo == 3){
		total = xbacon * quantidade;
		printf("Total: R$ %.2f\n", total);


	}

	else if (codigo == 4){
		total = torrada * quantidade;
		printf("Total: R$ %.2f\n", total);


	}

	else if (codigo == 5){
		total = refrigerante * quantidade;
		printf("Total: R$ %.2f\n", total);


	}


	return 0;
}