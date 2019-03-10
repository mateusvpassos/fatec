#include <stdio.h>
int primo(int);
int main(){
	
	int n, resultado=0;
	
	do{
		scanf("%d", &n);
	}while(n>10000000);
	
	resultado=primo(n);
	
	if(resultado==0 && n!=1){
		printf("PRIMO\n");
	}else{
		printf("!PRIMO\n");
	}
	
	return 0;
}
int primo(int n){
	
	int i, res=0;
	
	for (i=2;i<=n/2;i++) {
    	if (n % i == 0) {
       		res++;
       		break;
    	}
 	}
	
	return res;
}
