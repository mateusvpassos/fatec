//14.Escrever uma fun��o que receba 3 valores inteiros e retorne o maior valor.
//15.Escrever uma fun��o que receba um vetor de 10 posi��es de inteiros e retorne a soma dos indices �mpares.
#include<stdio.h>
void maior(int a, int b, int c){
	if(a>b && a>c)
		printf("\nMAIOR VALOR X= %d ", a);
	else if(b>a && b>c)
		printf("\nMAIOR VALOR Y= %d ", b);
	else
		printf("\nMAIOR VALOR Z= %d ", c);
		
	return;
}
main(){
	int x, y ,z;
	printf("\nX= ");
	scanf("%d", &x);
	printf("\nY= ");
	scanf("%d", &y);
	printf("\nZ= ");
	scanf("%d", &z);
	maior(x,y,z);
}
