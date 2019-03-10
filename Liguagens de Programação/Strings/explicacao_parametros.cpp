/*PASSAGEM DE PARAMETROS
Existem duas formas de passarmos os parametros para as funçoes:

	Por valor: nesse caso é realizado uma cópia do valor passado em um outro 
endereço de memória. Assim as alterações dentro da função não são repassadas dora dela.
TODAS as variáveis simples são passadas por valor.

	Por referência: neste caso é passado o endereço real da variável. Por isso qualquer alteraçao
do conteúdo da variável dentro da função, também reflete fora da função.
TODAS as variáveis compostas (vetores, matrizes, strings, registros)
são SEMPRE passadas por referência.
Ex:
*/

//int soma (int &a, int &b) AeB e XeY receberão os mesmo valores, POR REFERÊNCIA COM O & NA FRENTE.
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
