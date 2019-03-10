//ESCREVER UM PROGRAMA QUE LEIA UMA FRASE DE ATE 80 CARCTERES. GERE UMA SEGUNDA STRING CONVERTENDO TODOS OS CARACTERES PARA MAIUSCULO. EXIBIR AS DUAS STRINGS.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
	char frase[80], frs[80];
	int i;
	printf("DIGITE UMA FRASE :");
	gets(frase);
	//CONVERTER PARA MAIUSCULO
	for(i=0;i<strlen(frase);i++)
		frs[i]=toupper(frase[i]);
	frs[i]='\0';
	//EXIBIÇOES:
	printf("\n\nFRASE DIGITADA: ");
	puts(frase);
	printf("\n\nFRASE MAIUSCULO: ");
	puts(frs);
}
