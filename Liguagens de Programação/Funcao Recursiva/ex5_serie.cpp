#include<stdio.h>
float valorSerie(int numero, float resultado, int i){
	resultado=(1.0/i)+resultado;
	if(i==numero){
		return resultado;
	}
	return valorSerie(numero, resultado, (i+1));
}
main(){
	int i=1, numero;
	printf("VALOR DE A: ");
	scanf("%d", &numero);
	printf("VALOR: %f", valorSerie(numero, resultado, i));
}
