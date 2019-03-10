#include<stdio.h>
#include<string.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>
#include<ctype.h>
void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
main(){
	char fr[20];
	int i, x=10;
	system("Color 0C");
	printf("DIGITE UMA PALAVRA: ");
	gets(fr);
	for(i=0;i<strlen(fr);i++){
		gotoxy(x, 5);
		printf("%c", fr[i]);
		x=x+3;
	}
}

