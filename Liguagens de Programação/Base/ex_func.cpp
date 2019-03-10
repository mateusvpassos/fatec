//PROCEDIMENTO - FAZ E VOLTA AO NORMAL - NAO RETORNA VALOR - VOIDDDDDDDDDDDDDDDDDDDDDDDDDD
//FUNÇAO - RETORNA UM VALOR - INT REAL E CHAR
/*
<TIPO_DE_FUNÇAO> <nome_de_função> (<parametro>)
int                                 <tipodeparametro><nomeParametro>
float
char 
void

*/
#include <stdio.h>
//FUNÇAO AQUI
int soma (int a, int b) {
	int s;
	s=a+b;
	return s;
}
main(){
	int x, y, z;
	printf("x = ");
	scanf("%d", &x);
	
	printf("y = ");
	scanf("%d", &y);
	
	z= soma(x, y);
	printf("\n\nSoma = %d", z);
}
