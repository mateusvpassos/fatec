/* ESCREVERR UM PROGRAMA QUE LEIA UMA FRASE DE ATÉ
80 CARACTERES, GERE UMA SEGUNDA STRING RETIRANDO TODOS OS ESPAÇOS EM BRANCO. EXIBIR AS DUAS STRINGS.
*/
#include <stdio.h>
#include <string.h>
main(){
	char frase[80], frs[80];
	int i ,j; 
	printf("DIGITE UMA FRASE");
	gets(frase);
	j=0;
	for(i=0;i<strlen(frase);i++)
		if(frase[i]!=' '){
			frs[j]=frase[i];
			j++;
		}
		frs[j]='\0';
		
	printf("\n\n Frase Digitada: ");
	puts(frase);
	printf("\n\nFrase sem espaço: ");
	puts(frs);
}
