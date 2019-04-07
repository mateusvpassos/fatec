#include <stdio.h>
void inverte(int numero, int *vetor);

int main(){
	int numero;
	scanf("%d", &numero);
	int vetor[numero];
	
	inverte(numero, vetor);
	
	return 0;
}

void inverte(int numero, int *vetor){
	int i, k=numero-1;
	int temp;
	
	for(i=0; i<numero;i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i=0;i<numero/2;i++){
		temp=vetor[i];
		vetor[i]=vetor[k];
		vetor[k]=temp;
		k--;
	}
	
	for(i=0;i<numero;i++){
		printf("%d\n", vetor[i]);
	}
}

