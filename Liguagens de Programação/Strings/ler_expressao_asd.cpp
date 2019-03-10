#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	char exp[20];
	int qtdV=0, qtdo=0, qtdd=0, i;
	//LER EXPRESSAO
	printf("\nDIGITE UMA EXPRESSAO ");
	gets(exp);
	//VERIFICAR CADA CARACTER
	for(i=0;i<strlen(exp); i++){
		if(((exp[i]>='a')&&(exp[i]<='z'))||((exp[i]>='A')&&(exp[i]<='Z')))
			qtdV++;
		else if((exp[i]>='0')&&(exp[i]<='9'))
			qtdd++;
		else if((exp[i]=='+')||(exp[i]=='-')||(exp[i]=='*')||(exp[i]=='/'))
			qtdo++;
	}
	//EXIBIÇOES
	printf("\n\nEXPRESSA DIGITADA: ");
	puts(exp);
	printf("\nQTD LETRAS: %d", qtdV);
	printf("\nQTD DIGITOS: %d", qtdd);
	printf("\nQTD OPERADORES: %d", qtdo);
}
