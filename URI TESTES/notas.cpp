#include <stdio.h>
int main(){
	
	double valor, valorOriginal;
	int qt100, qt50, qt20, qt10, qt5, qt2;
	int qtm100, qtm50, qtm25, qtm10, qtm5, qtm1;
	
	qt100=0; 
	qt50=0;
	qt20=0; 
	qt10=0;
	qt5=0;
	qt2=0;
	qtm100=0;
	qtm50=0;
	qtm25=0;
	qtm10=0;
	qtm5=0;
	qtm1=0;
	
	scanf("%lf", &valor);
	valorOriginal=valor;
	
	while(valor>=100.0){
		valor=valor-100.0;
		qt100++;
	}
	
	while(valor>=50.0){
		valor=valor-50.0;
		qt50++;
	}
		
	while(valor>=20.0){
		valor=valor-20.0;
		qt20++;
	}
	
	while(valor>=10.0){
		valor=valor-10.0;
		qt10++;
	}
	 
	while(valor>=5.0){
		valor=valor-5.0;
		qt5++;
	}
	while(valor>=2.0){
		valor=valor-2.0;
		qt2++;
	}
	while(valor>=1.0){
		valor=valor-1.0;
		qtm100++;
	}
	while(valor>=0.5){
		valor=valor-0.5;
		qtm50++;
	}
	while(valor>=0.25){
		valor=valor-0.25;
		qtm25++;
	}
	while(valor>=0.1){
		valor=valor-0.1;
		qtm10++;
	}
	while(valor>=0.05){
		valor=valor-0.05;
		qtm5++;
	}
	while(valor>=0.01){
		valor=valor-0.01;
		qtm1++;
	}
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", qt100);
	printf("%d nota(s) de R$ 50.00\n", qt50);
	printf("%d nota(s) de R$ 20.00\n", qt20);
	printf("%d nota(s) de R$ 10.00\n", qt10);
	printf("%d nota(s) de R$ 5.00\n", qt5);
	printf("%d nota(s) de R$ 2.00\n", qt2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", qtm100);
	printf("%d moeda(s) de R$ 0.50\n", qtm50);
	printf("%d moeda(s) de R$ 0.25\n", qtm25);
	printf("%d moeda(s) de R$ 0.10\n", qtm10);
	printf("%d moeda(s) de R$ 0.05\n", qtm5);
	printf("%d moeda(s) de R$ 0.01\n", qtm1);
	return 0;
}
