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
void conta_valor(int vet[10], int x){
	int i, qtd=0;
	for(i=0;i<10;i++){
		if(vet[i]==x)
			qtd++;
	}
	return;
}
main(){
	int v1[10], v2[10], n, q1, q2;
	printf("LER VETOR 1\n");
	le_vetor(v1);
	printf("LER VETOR 2\n");
	le_vetor(v2);
	printf("\nDIGITE UM VALOR: ");
	scanf("%d", &n);
	q1=conta_valor(v1,n);
	q2=conta_valor(v2,n);
	printf("\n\nVETOR 1: ");
	exibe_vetor(v1);
	printf("\n\n O valor %d aparece %d vezes no vetor 1: ", n, q1);
	printf("\n\n O valor %d aparece %d vezes no vetor 2: ", n, q2);
}
