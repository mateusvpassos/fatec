/*PASSAGEM DE PARAMETROS
Existem duas formas de passarmos os parametros para as fun�oes:

	Por valor: nesse caso � realizado uma c�pia do valor passado em um outro 
endere�o de mem�ria. Assim as altera��es dentro da fun��o n�o s�o repassadas dora dela.
TODAS as vari�veis simples s�o passadas por valor.

	Por refer�ncia: neste caso � passado o endere�o real da vari�vel. Por isso qualquer altera�ao
do conte�do da vari�vel dentro da fun��o, tamb�m reflete fora da fun��o.
TODAS as vari�veis compostas (vetores, matrizes, strings, registros)
s�o SEMPRE passadas por refer�ncia.
Ex:
*/

//int soma (int &a, int &b) AeB e XeY receber�o os mesmo valores, POR REFER�NCIA COM O & NA FRENTE.
#include <stdio.h>
int soma(int a, int b){
	int s;
	s=a+b;
	//AeB RECEBE 0, MAS X E Y CONTINUA O QUE FOI...COM O & XeY RECEBE 0 
	a=0;
	b=0;
	return s;
}
main(){
	int x,y,sm;
	printf("x = ");
	scanf("%d",&x);
	printf("\n Y: ");
	scanf("%d", &y);
	sm=soma(x,y);
	printf("\nSOMA: %d ", sm);
	printf("\n X= %d", x);
	printf("\n Y= %d", y);
}
