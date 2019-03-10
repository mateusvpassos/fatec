#include<stdio.h>
#include<math.h>
int seriePotencia(int numero){
	if(numero==0){
		return 1;
	} else{
		return pow(2,numero)+seriePotencia(numero-1);
	}
}
int potenciaSomada(int numero){
	if(numero==0)
		return 1;
	if(numero==1)
		return n;
	else{
		return potenciaSomada(numero-1)*2;
	}
}
int fatorial(int numero){
	if(numero==1){
		return 1;
	} else {
		return fatorial(numero)+fatorial(numero-1);
	}
}
float serieFatorial(float numero){
	if(numero==1){
		return 0.33;
	}else return fatorial(numero)/((fatorial(numero)+2)+serieFatorial(numero-1));
}
main(){
	int numero;
	printf("DIGTE UM NUMERO: ");
	scanf("%d", &numero);
	printf("%d",seriePotencia(numero));
}
