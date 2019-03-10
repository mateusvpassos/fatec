#include<stdio.h>
float funcaoDeSerie(float numero){
	if(numero==1){
		return 0.5;
	} else{
		return ((numero*numero+1)/ (numero+3))+funcaoDeSerie(numero-1);
	}
}
main(){
	float numero;
	do{
		printf("Digite um valor: ");
		scanf("%f", &numero);
	}while(numero<1);
	printf("Resultado: %f", funcaoDeSerie(numero));
}
