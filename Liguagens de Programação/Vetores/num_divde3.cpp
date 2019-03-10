#include <stdio.h>
void le_vetor (int v[10]){
	int i;
	for(i=0;i<10;i++){
		printf("\nElemento[%d]: ", i);
		scanf("%d", &v[i]);
	}
	return;
}
main(){
	int vet[10], qtd=0, i;
	le_vetor(vet);
	for(i=0;i<10;i++){
		if(vet[i]%3==0)
			qtd++;
	}
	printf("QUANTIDADE DE DIVISORES DE 3: %d", qtd);
}
