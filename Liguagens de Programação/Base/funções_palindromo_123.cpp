//PROGRAMA QUE LEIA UMA STRING DE ATE 40 CARACTERES EXBIA:
// QUANTIDADE DE CARACTERES
// A STRING CONVERTIDA EM MAIUSCULO
//SE A STRING É  OU NAO PALINDROMA
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <locale.h>
int tamanho(char str[40]){
	int t;
	t=strlen(str);
	return t;
}
void converte_maiusculo(char str[40]){
	int i;
	for(i=0;i<strlen(str);i++)
		str[i]=toupper(str[i]);
	return;
}
int verif_palindroma(char str[40]){
	int i, j;
	char str2[40];
	j=strlen(str)-1;
	for(i=0;i<strlen(str);i++){
		str2[i]=str[j];
		j--;
	}
	str2[i]='\0';
	if(strcmp(str,str2)==0){
		return 1; //1 é palindroma
	}else return 0;
}
c
g
c
f
a
d
main(){
	setlocale(LC_ALL,"Portuguese");
	char texto[40];
	int tam, pl;
	printf("Texto: ");
	gets(texto);
	tam=tamanho(texto);
	converte_maiusculo(texto);
	pl=verif_palindroma(texto);
	printf("\n\nTexto digitado: ");
	puts(texto);
	printf("\n\n O texto possui %d caracteres", tam);
	if(pl)
		printf("\n O texto é palindromo!");
	else printf("\n O tesxto não é palindromo!");
}
