#include <stdio.h>
int funcaoSequencia(int n){
	int resultado;
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else{
	return 2*funcaoSequencia(n-1)+3*funcaoSequencia(n-2);
}
}
main(){
	int n;
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &n);
	printf("%d", funcaoSequencia(n));
}
