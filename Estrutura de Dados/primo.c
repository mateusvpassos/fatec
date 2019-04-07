#include <stdio.h>
void primo(int, int*);
int main(){
	
	int n, resultado=0;
	
	do{
		scanf("%d", &n);
	}while(n>10000000);
	
	primo(n, &resultado);
	
	if(resultado==0 && n!=1){
		printf("PRIMO\n");
	}else{
		printf("!PRIMO\n");
	}
	
	return 0;
}
void primo(int n, int *resultado){
	
	int i;
	
	for (i=2;i<=n/2;i++) {
    	if (n % i == 0) {
       		*resultado=*resultado+1;
       		break;
    	}
 	}
	
}
