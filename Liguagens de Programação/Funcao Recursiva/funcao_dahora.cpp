#include <stdio.h>
float serieSequencia (float numero){
	if(numero==1.0){
		return 0.5;
	} else{
		return numero/(numero+1)+serieSequencia(numero-1);
	}
}
main(){
	float numero;
	printf("DIGTE UM NUMERO: ");
	scanf("%f", &numero);
	printf("%f",serieSequencia(numero));
}
