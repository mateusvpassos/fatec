#include<stdio.h>
int sequenciaAckerman(int m, int n){
	if(m==0)
		return n+1;
	else if(m!=0 && n==0){
		return sequenciaAckerman(m-1,1);
	}
	else if(m!=0 && n!=0){
		return sequenciaAckerman(m-1,sequenciaAckerman(m,n-1));
	}
}
main(){
	int a,b;
	printf("DIGTE VALOR A E B: ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("resutlado: %d", sequenciaAckerman(a,b));
}
