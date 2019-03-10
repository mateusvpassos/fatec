#include <stdio.h>
int main(){
	
	int diasIdade, anos, mes, dias;
	anos=0;
	mes=0;
	dias=0;
	
	scanf("%d", &diasIdade);
	
	while(diasIdade>=365){
		diasIdade=diasIdade-365;
		anos++;
	}
	while(diasIdade>=30){
		diasIdade=diasIdade-30;
		mes++;
	}
	dias=diasIdade;
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dias);
	
	return 0;
}
