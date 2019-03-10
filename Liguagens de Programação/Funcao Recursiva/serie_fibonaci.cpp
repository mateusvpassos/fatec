//8.ESCREVER UMA FUNCAO RECURSIVA QUE EXIBA OS N PRIMEIROS TERMOS DA SERIE DE FIBONACCI
#include<stdio.h>
int serieFibonnaci(int numero){
	if(numero==0 || numero==1){
		return 1;
	}else{
		return serieFibonnaci(numero-1)+serieFibonnaci(numero-2);
	}
}
main(){
	int numero;
	do{
		printf("Digite um valor: ");
		scanf("%d", &numero);
	}while(numero<1);
	for(int i=0;i<numero;i++)
		printf("%d ", serieFibonnaci(i));
}
