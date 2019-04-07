#include <stdio.h>
#include <math.h>
void pi(int n, float *res);
int main(){
	
	int n;
	float res;

	scanf("%d", &n);
	
	pi(n, &res);
	
	printf("%.10f\n", res);
	
	return 0;
}
void pi(int n, float *res){
	float temp=1.0;
	int i;
	
	for(i=1;i<=n;i++){
		
		temp=temp+pow(-1,i)/(2.0*i+1.0);
		
	}
	
	*res=4.0*temp;

}
