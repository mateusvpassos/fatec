#include <stdio.h>
#include <locale.h>
int calcF(int n){
	int i;
	for(i=1;n>1;n--){
		i=i*n;
	}
	return i;
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int num, r;
	printf("\nDigite um número: ");
	scanf("%d", &num);
	
	r=calcF(num);
	printf("\nFatorial de %d: ", num);
	printf("%d", r);
	
}
