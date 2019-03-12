#include<stdio.h>
int fibonacci(int);
int main(){
	
	int n, res;
	do{
		scanf("%d", &n);	
	}while(n<=0 || n>10000);
	
	
	res=fibonacci(n);

	printf("%d", res);
	
}
int fibonacci(int n) {
    int ant = 1, prox = 1, temp, i;
 
    if(n == 1) {
        return 1;
    } else if(n == 2) {
        return 1;
    } else {
        for(i = 3; i <= n; i++) {
            temp = prox;
            prox = ant + prox;
            ant = temp;
        }
        return prox;
    }
}

