/* ESCREVER UM PROGRAMA QUE LEIA UMA FRASE DE ATE 80 CARACTERES E VERIFIQUE SE A FRASE E PALINDROMA.
*/
#include <stdio.h>
#include <string.h>
main(){
	char frase[80], frs[80], inv[80];
	int i ,j; 
	printf("DIGITE UMA FRASE :");
	gets(frase);
	j=0;
	//RETIRAR ESPAÇO
	for(i=0;i<strlen(frase);i++)
		if(frase[i]!=' '){
			frs[j]=frase[i];
			j++;
		}
		frs[j]='\0';
		//GERAR INVERSA
		j = strlen(frs)-1;
		for(i=0; i<strlen(frs);i++){
			inv[i]=frs[j];
			j--;
		}
		inv[i]='\0';
		//COMPARAÇAO  DAS STRINGS
		if(strcmp(frs, inv)==0)
			printf("\n A PLAVRA E PALINDROMA!!!!!!!!!");
		else printf("\n NAO E PALINDROMO!!!!");
	}
