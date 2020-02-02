
#include <stdio.h>
//Calculadora
int main(){

int numero1, numero2, resultado;
char operador;
//O usuário digita o primeiro número, o operador desejado (+, - , *, /), e o segundo número
	scanf("%d", &numero1);  
	scanf(" %c", &operador); 
	scanf("%d", &numero2);

while(operador != 'F'){ //Até o operador ser diferente de F, o programa irá rodar

	if(operador == '+'){
		resultado = numero1 + numero2; 
		printf("%d\n", resultado);
		

	}

	else if(operador == '-'){
		resultado = numero1 - numero2;
		printf("%d\n", resultado);
		

	}
	else if(operador == '/' && numero2 != 0){
		resultado = numero1 / numero2;
		printf("%d\n", resultado);
		
	}

	else{
		resultado = numero1 * numero2;
		printf("%d\n", resultado);
		

	}
	resultado = 0; // atualização da variável resultado para 0, atualização do primeiro número, do operador, e do segundo número

	scanf("%d", &numero1);
	scanf(" %c", &operador);
	scanf("%d", &numero2);
}

  return 0;

 }

