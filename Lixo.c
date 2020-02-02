#include <stdio.h>

int main(){
	char lixo;
	int vidro, papel, plastico, metal, organico, eletronico; //Tipos de Lixo
	int i;


	vidro = papel = plastico = metal = organico = eletronico = 0; //Inicializa a quantidade de lixos como 0



	for(i = 0; i < 10; i++){        //Faz 10 verificações pra ver qual o tipo de lixo

		scanf(" %c", &lixo);


		switch(lixo){				
			case 'V': vidro++; break;
			case 'L': plastico++; break;
			case 'P': papel++; break;
			case 'M': metal++; break;
			case 'E': eletronico++; break;
			case 'O': organico++; break;
			default: printf("Lixo não detectado.\n");


				//adiciona 1 pra qual tipo de lixo, ou diz que não foi detectado
		}

	}

printf("Vidro : %d\nPlástico: %d\nPapel: %d\nOrganico: %d\nMetal: %d\nEletronico: %d\n", vidro, plastico, papel, organico, metal, eletronico);
	return 0;
	//Imprime a quantidade final de cada lixo
}
