#include <stdio.h>
void derivada(double* vetor, int grau);
int main(){
	int grau, i, k;

	scanf("%d", &grau);
	
	k=grau;
	double vetor[k+1];
	
	for(i=0;i<=grau;i++){
		scanf("%lf", &vetor[i]);
	}
	
	derivada(vetor, grau);
	
	for(i=0;i<=grau;i++){
		k--;
		printf("%.0lf", vetor[i]);
		if(k!=0 && k!=1){
			printf("x^%d+", k);
		}else if(k==1){
			printf("x+");
		}else {
			break;
		}
	}
	
	return 0;
}
void derivada(double* vetor, int grau){
	int i, k;
	k=grau;
	for(i=0;i<=grau;i++){
		
		vetor[i]=vetor[i]*k;
		k--;
		
	}
	return;	
}
