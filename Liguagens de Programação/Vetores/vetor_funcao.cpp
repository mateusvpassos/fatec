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
void ordena_vetor(int vet[10]){
	int i, j, aux;
	for(j=9;j>0;j--){
		for(i=0;i<j;i++){
			if(vet[i]>vet[i+1]){
				aux=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=aux;
			}
		}
	}
	return;
}
main(){
	int v1[10], v2[10];
	printf("LER VETOR 1\n");
	le_vetor(v1);
	printf("LER VETOR 2\n");
	le_vetor(v2);
	ordena_vetor(v1);
	ordena_vetor(v2);
	printf("\nVETOR 1 ORDENADO: ");
	exibe_vetor(v1);
	printf("\n\nVETOR 2 ORDENADO: ");
	exibe_vetor(v2);
}
