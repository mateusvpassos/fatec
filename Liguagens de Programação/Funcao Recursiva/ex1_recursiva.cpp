//ESCREVE UMA FUNCAO RECURSIVA QUE CONVERTA UM Nº N NA BASE DECIMAL PARA BINARIO
#include <stdio.h>
int converteDecimalParaBinario (int numeroDecimal){
	if(numeroDecimal==0)
		return 0;
	converteDecimalParaBinario(numeroDecimal/2);
	printf("%d", numeroDecimal%2);
}
main(){
	int num, numeroDec;
	printf("DIGITE UM NUMERO EM DECIMAL\n");
	scanf("%d", &numeroDec);
	num=converteDecimalParaBinario(numeroDec);
}
