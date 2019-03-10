//
//SOMA 3
//
#include <stdio.h>
int somativa(int numero){
	if(numero<=1)
		return 1;
	else{
		return 3+somativa(numero-1);
	}
}
main(){
	int numero;
	printf("ATA: ");
	scanf("%d", &numero);
	printf("%d", somativa(numero));
}
