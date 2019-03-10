#include <stdio.h>
#include <math.h>
double poli(double *vet, int grau, double x);
int main(){
	
	int grau, i;
	double x;
	scanf("%d %lf", &grau, &x);
	double vet[grau+1], resultado;
	
	for(i=0;i<=grau;i++){
		scanf("%lf", &vet[i]);
	}
	
	resultado=poli(vet, grau, x);
	
	printf("%.2lf\n", resultado);
	
	return 0;
}
double poli(double *vet, int grau, double x){
	double resultado=0;
	int i, k=grau;
	for(i=0;i<=grau;i++){
		resultado=resultado+(vet[i])*pow(x, k);
		k--;
	}
	
	return resultado;
	
}
