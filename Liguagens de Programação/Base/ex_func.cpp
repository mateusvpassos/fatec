//PROCEDIMENTO - FAZ E VOLTA AO NORMAL - NAO RETORNA VALOR - VOIDDDDDDDDDDDDDDDDDDDDDDDDDD
//FUN�AO - RETORNA UM VALOR - INT REAL E CHAR
/*
<TIPO_DE_FUN�AO> <nome_de_fun��o> (<parametro>)
int                                 <tipodeparametro><nomeParametro>
float
char 
void

*/
#include <stdio.h>
//FUN�AO AQUI
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
