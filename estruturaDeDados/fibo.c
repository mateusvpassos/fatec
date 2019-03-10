#include<stdio.h>
int fibonacci(int);
int main(){
	
	int n, res;

	scanf("%d", &n);
	
	res=fibonacci(n);

	printf("%d", res);
	
}
int fibonacci(int n){                                         
	if (n == 1){
		return 1;
	}else if (n == 2) {
		return 1; 
	}else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
