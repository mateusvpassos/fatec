/**
TRABALHO DUPLA DATA ENTREGA: PROXIMA SEGUNDA

ESCREVER UM PROGRAMA QUE LEIA UMA STRING DE ATÉ 80 CARACTERES E PERGUNTE AO USUARIO
QUAIS DAS OPCOES ELE DESEJA EXECUTAR:

1 - SABER O Nº DE CARACTERES DA STRING
2 - CONVERTER PARA MAIUSCULO
3 - CONVERTER PARA MINUSCULO
4 - EXIBIR EM ORDEM INVERSA
5 - CONTAR O NUMERO DE VOGAIS
6 - CONTAR O NUMERO DE ESPAÇOES EM BRANCO
7 - SAIR DO PROGRAMA

CADA OPÇÃO ESCREVER USANDO FUNCOES RECURSIVAS..
*/
#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include<locale.h>
#include<windows.h>
int contaCaracterString(char string[]){
	if(string[0]=='\0'){
		return 0;
	} else{
		return contaCaracterString(&string[1])+1;
	}
}
void converteMaiusculo(char string[]){
	if(string[0]=='\0'){
		return;
	}else{
		string[0]=toupper(string[0]);
		printf("%c", string[0]);
		converteMaiusculo(&string[1]);
	}
}
void converteMinusculo(char string[]){
	if(string[0]=='\0'){
		return;
	}else{
		string[0]=tolower(string[0]);
		printf("%c", string[0]);
		converteMinusculo(&string[1]);
	}
}
void inverteString(char string[]){
	if(string[0]=='\0'){
		return;
	}else{
		inverteString(&string[1]);
		printf("%c", string[0]);
	}
}
int contaVogais(char string[]){
	if(string[0]=='\0'){
		return 0;
	}else if(string[0]=='a'||
	 		string[0]=='e'||
			string[0]=='i'||
			string[0]=='o'||
			string[0]=='u'||
			string[0]=='A'||
			string[0]=='E'||
			string[0]=='I'||
			string[0]=='O'||
			string[0]=='U'){
		return 1+contaVogais(&string[1]);
	}else{
		return contaVogais(&string[1]);
	}
}
int contaEspaco(char string[]){
	if(string[0]=='\0'){
		return 0;
	}else if(string[0]==' '){
		return 1+contaEspaco(&string[1]);
	}else{
		return contaEspaco(&string[1]);
	}
}
int mostraMenu(){
	printf("1 - Quantidade de caracteres na string\n");
	printf("2 - Converter para maiúsculo\n");
	printf("3 - Converter para minúsculo\n");
	printf("4 - Exibir em ordem inversa\n");
	printf("5 - Contar quantidade de vogais\n");
	printf("6 - Contar quantidade de espaços em branco\n");
	printf("7 - Sair do programa\n\n");
	printf("Digite uma opção: ");
	int escolha;
	do{
		scanf("%d", &escolha);
	}while(escolha<1||escolha>7);
	return escolha;
}
main(){
	char string[80];
	int escolha;
	setlocale(LC_ALL, "Portuguese");
	escolha=mostraMenu();
	while(escolha!=7){
		printf("Digite a frase: ");
		fflush(stdin);
		gets(string);
		if(escolha==1){
			printf("%d", contaCaracterString(string));
			Sleep(2000);
		} else if(escolha==2){
			converteMaiusculo(string);
			Sleep(2000);
		} else if(escolha==3){
			converteMinusculo(string);
			Sleep(2000);
		} else if(escolha==4){
			inverteString(string);
			Sleep(2000);
		} else if(escolha==5){
			printf("%d ",contaVogais(string));
			Sleep(2000);
		} else if(escolha==6){
			printf("%d ",contaEspaco(string));
			Sleep(2000);
		}
		system("cls");
		escolha=mostraMenu();
	}
}
