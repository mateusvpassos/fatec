#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include<ctype.h>
void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
main(){
	setlocale(LC_ALL, "Portuguese");
	system("Color 1F");
	//gotoxy(_COLUNA,_LINHA);
	gotoxy(20,10);
	printf("aloooooooooooooooooooooooooooooooo");	
}
