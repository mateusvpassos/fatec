/*
	Mateus Vinicius dos Passos
	27/02/2019
	Estrutura de Dados
*/
#include <stdio.h>
int main(){
	
	int numero, i;
	float resultado=0;
	scanf("%d", &numero);
	
	for(i=1; i<=numero; i++){
		resultado=1.0/i+resultado;
	}
	
	printf("%.8f", resultado);
	
	return 0;
}

