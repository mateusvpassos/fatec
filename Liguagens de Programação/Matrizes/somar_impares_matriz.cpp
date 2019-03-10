//15.Escrever uma função que receba um vetor de 10 posições de inteiros e retorne a soma dos indices ímpares.
#include<stdio.h>
void le_vetor (int v[10]){
	int i;
	for(i=0;i<10;i++){
		printf("\nElemento[%d]: ", i);
		scanf("%d", &v[i]);
	}
	return;
}
int somaIm(int v[10]){
	int sm=0, i;
	for(i=0;i<10;i++){
		if(v[i]%2 != 0)
			sm=sm+v[i];
	}
	return sm;
}
main(){
	int vetor[10], sma;
	le_vetor(vetor);
	sma=somaIm(vetor);
	printf("\nSOMA DO IMPAR: %d", sma);
}
