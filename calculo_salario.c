#include <stdio.h>

int main(){
	// DECLARAÇÃO DE VARIÁVEIS

	int num_funcionario; //numero q identifica o funcionario
	int horas_trabalhadas; // quantas horas foram trabalhadas naquele mês
	float valor_recebe; //valor recebido por hora
	float salario; //salario final
	
	// ler os valores
	scanf("%d %d %f", &num_funcionario, &horas_trabalhadas, &valor_recebe);

	//Faz as contas do salário final
	salario = horas_trabalhadas * valor_recebe;
	

	//Imprime os valores
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_funcionario, salario);




	return 0;
}