//ESCREVER UM PROGRAMA QUE LEIA UMA PALAVRA DE ATE 20 CARACTERES. 
//CONVERTER TODAS AS LETRAS PARA MAIUSCULO
//EXIBE CADA LETRA DA PALAVRA A APARTIR DA COLUNA 15 DA LINHA 15,
//INCREMENTANDO DE 1 LINHA E 2 COLUNAS CADA LETRA.
//DIAGONAL \*
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
main(){
	setlocale(LC_ALL,"Portuguese");
	system("Color F0");
	char pl[20], plM[20];
	int x=15,y=15,i;
	printf("\nDIGITE A PALAVRA: ");
	gets(pl);
	for(i=0;i<strlen(pl);i++)
		plM[i]=toupper(pl[i]);
	plM[i]='\0';
	for(i=0;i<strlen(pl);i++){
		gotoxy(x,y);
		printf("%c", pl[i]);
		x=x+2;
		y++;
		Sleep(500);
	}
}
