#include<stdio.h>
int funcao1(int n){
	if(n==0){
		printf("FIM");
	}
	else{
		printf("%d", n);
		funcao1(n-1);
	}
}
int funcao2(int n){
	if(n==0){
		printf("FIM");
	}
	else{
		funcao2(n-1);
		printf("%d", n);
	}
}
int funcao3(int n){
	if(n==0){
		printf("FIM");
	}
	else{
		printf("%d", n);
		funcao3(n-1);
		printf("%d", n);
	}
}
int funcao4(int n){
	if(n==0){
		printf("FIM");
	}
	else{
		funcao4(n-1);
		printf("%d", n);
		funcao4(n-1);
	}
}
main(){
	int numero;
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &numero);
	funcao1(numero);
	printf("\n\n");
	funcao2(numero);
	printf("\n\n");
	funcao3(numero);
	printf("\n\n");
	funcao4(numero);
	printf("\n\n");
}
