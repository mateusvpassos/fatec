#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	
	int i, j, k=120, qtdEspacos=0, qtdVogais=0;
	char string[100];
	fflush(stdin);
	scanf ("%[^\n]", string);
	//fgets(string, 100, stdin);

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
	
	for(i=0;i<strlen(string);i++){
		if(string[i]==' '){
			printf(" ");
		}else if(string[i]!='\0'){
			printf("%c", string[i]+1);
		}else{
			break;
		}
	}
	printf("\n");
	//nao faz sentido// PORQUE FUNCIONA
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
	printf("\n");
	int tamanho=strlen(string);
	printf("%c", string[tamanho-1]);
	for(i=0;i<strlen(string)-1;i++){
		printf("%c", string[i]);
	}
	return 0;
}
