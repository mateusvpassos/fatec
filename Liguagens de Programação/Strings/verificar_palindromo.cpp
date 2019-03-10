//LER UMA PALAVRA ATE 20 E VERIFIQUE SE É PALINDROMO
#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
	char p[20], pr[20];
	int i, j;
	//LER
	printf("\nDIGITE UMA PALAVRA: ");
	gets(p);
	//INVERSA
	j = strlen(p)-1;
	for(i=0; i<strlen(p);i++){
		pr[i]=p[j];
		j--;
	}
	pr[i]='\0';
	if(strcmp(p, pr)==0)
		printf("\n A PLAVRA É PALINDROMA!!!!!!!!!");
	else printf("\n NÃO É PALINDROMO!!!!");
}
