//<string.h> funçoes: gets(variavel_string); LE A VARIAVEL STRING; puts(variavel); exibe a variavel string;
//strlen(variavel) tamanho da string
//strcpy(vairavel1, variavel2) COPIA A STRING
//strcat(variavel1, varialvel2)  CONCATENA O 2 NO FIM DA 1
//strcmp(s1,s2) COMPARA POR 1LETRA ALFABETICAMENTE . .. NEGATIVO(s1<s2) 0(s1==s2) POSITIVO(s1>s2)
#include <stdio.h>
#include <string.h>
main(){
	char s1[20], s2[20], st[20];
	int t1,t2;
	printf("Digite um texto: ");
	gets(s1);
	printf("\n\nDigite outro texto: ");
	gets(s2);
	printf("\nTexto 1: ");
	puts(s1);
	//LENGTH
	t1=strlen(s1);
	printf("\nLength Texto 1: %d", t1);
	printf("\nTexto 2: ");
	puts(s2);
	t2=strlen(s2);
	printf("\nLength Texto 2: %d", t2);
	//DE S1 COPIAR para ST
	strcpy(st, s1);
	printf("\n\nCOPIAR: ");
	puts(st);
	//CONCATENAR
	printf("\n\nCONCATENAR: ");
	strcat(s1, s2);
	puts(s1);
	if(strcmp(s1,s2)==0)
		printf("IGUAIS");
	else printf("DIFERENTES");
}
