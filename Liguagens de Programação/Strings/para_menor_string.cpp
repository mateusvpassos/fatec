#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
main(){
	char frase[80], frs[80];
	setlocale(LC_ALL,"Portuguese");
	int i;
	printf("DIGITE UMA FRASE :");
	gets(frase);
	//CONVERTER PARA MINICUSCLO
	for(i=0;i<strlen(frase);i++)
		frs[i]=tolower(frase[i]);
	frs[i]='\0';
	//EXIBIÇOES:
	printf("\n\nFRASE DIGITADA: ");
	puts(frase);
	printf("\n\nFRASE MINÚSCULO: ");
	puts(frs);
}
