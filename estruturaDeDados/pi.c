#include <stdio.h>
#include <math.h>
float pi(int n);
int main(){
	
	int n;
	float res;

	scanf("%d", &n);
	
	res=pi(n);
	
	printf("%.10f\n", res);
	
	return 0;
}
float pi(int n){
	float res, temp=1;
	int i;
	
	for(i=1;i<=n;i++){
		
		temp=temp+pow(-1,i)/(2*i+1);
		
	}
	res=4*temp;

	return res;
}
