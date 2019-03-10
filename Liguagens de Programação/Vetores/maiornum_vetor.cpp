#include<stdio.h>
void le_vetor (int vet[10]){
	int i;
	for(i=0;i<10;i++){
		printf("\nElemento[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	return;
}
void exibe_vetor(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		printf("%d ", vet[i]);
	}
	return;
}
void maior_valor(int vet[10]){
	int i, maior=vet[0];
	for(i=1;i<10;i++){
		if(vet[i]>maior)
			maior = vet[i];
	}
	return;
}
main(){
	int v[10], m;
	le_vetor(v);
	m=maior_valor(v);
	printf("\nO maior valor do vetor= %d ", m);
}
