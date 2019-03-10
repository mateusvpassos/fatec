#include <stdio.h>
int main(){
	
	double salario=0, salarioComAumento=0;
	int percentual=0;
	scanf("%lf", &salario);
	
	if(salario>2000.0){
		salarioComAumento=salario+salario*0.04;
		percentual=4;
	} else if(salario>1200.0 && salario<=2000.0){
		salarioComAumento=salario+salario*0.07;
		percentual=7;
	} else if(salario>800.0 && salario <=1200.0){
		salarioComAumento=salario+salario*0.1;
		percentual=10;
	} else if(salario>400.0 && salario<=800.0){
		salarioComAumento=salario+salario*0.12;
		percentual=12;
	} else if(salario>0.0 && salario<=400.0){
		salarioComAumento=salario+salario*0.15;
		percentual=15;
	}
	
	printf("Novo salario: %.2lf\n", salarioComAumento);
	printf("Reajuste ganho: %.2lf\n", salarioComAumento-salario);
	printf("Em percentual: %d %%\n", percentual);
	
	return 0;
}
