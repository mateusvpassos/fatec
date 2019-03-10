
//programaque leia 3 strings de ate 50 caracteres cada. exibir cada string centralizada
//nas linhas 5,7 e 9.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
main(){
	char s1[50],s2[50],s3[50];
	printf("TEXTO 1: ");
	gets(s1);
	printf("\nTEXTO 2: ");
	gets(s2);
	printf("\nTEXTO 3: ");
	gets(s3);
	gotoxy(40-(strlen(s1)/2), 5);
	puts(s1);
	gotoxy(40-(strlen(s2)/2), 7);
	puts(s2);
	gotoxy(40-(strlen(s3)/2), 9);
	puts(s3);
}
