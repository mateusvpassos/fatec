#include <stdio.h>
#include <math.h>
#include <string.h>
void qtdVogaisEEspacos(char string[]);
void proximaLetra(char string[]);
void inverte(char string[]);
void adiantaUm(char string[]);
int main(){
	
	char string[100];
	fflush(stdin);
	scanf ("%[^\n]", string);
	//fgets(string, 100, stdin);
	
	qtdVogaisEEspacos(string);
	proximaLetra(string);
	printf("\n");
	inverte(string);
	printf("\n");
	adiantaUm(string);
	return 0;
}
void qtdVogaisEEspacos(char string[]){
	
	int i, qtdVogais=0, qtdEspacos=0;
	for(i=0;i<strlen(string);i++){
		if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
			qtdVogais++;
		}
		if(string[i]==' '){
			qtdEspacos++;
		}
	}
	printf("%d\n", qtdVogais);
	printf("%d\n", qtdEspacos);
	
}
void proximaLetra(char string[]){
	
	int i;
	for(i=0;i<strlen(string);i++){
		if(string[i]==' '){
			printf(" ");
		}else if(string[i]!='\0'){
			printf("%c", string[i]+1);
		}else{
			break;
		}
	}
	
}
void inverte(char string[]){
	int i, j, k=120;
	for(i=0;i<strlen(string);i++){
		if(string[i]==' '){
			printf(" ");
		}
		for(j=94;j<=k;j++){
			if(string[i]==j){
				printf("%c", k-(string[i]-94)+5);
			}
		}
	}
	
}
void adiantaUm(char string[]){
	
	int tamanho=strlen(string), i;
	printf("%c", string[tamanho-1]);
	for(i=0;i<strlen(string)-1;i++){
		printf("%c", string[i]);
	}
	
}
