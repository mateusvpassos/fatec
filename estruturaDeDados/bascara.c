#include <stdio.h>
#include <math.h>
void raizes(float a, float b, float c, float *x1, float *x2);

int main(){
	
	float a, b, c, x1, x2;
	
	scanf("%f %f %f", &a, &b, &c);
	
	raizes(a, b, c, &x1, &x2);
	
	if(x1!=0 && x2!=0){
		printf("%.2f %.2f\n", x1, x2);
	}else{
		printf("NARN\n");
	}
	
}
void raizes(float a, float b, float c, float *x1, float *x2){
	float delta;
	
	delta = pow(b,2) - (4.0*a*c);
	
	if(delta<=0){
		*x1=0;
		*x2=0;
	}else{
		*x1 = ((-b) + sqrt(delta)) / (2.0*a);
 		*x2 = ((-b) - sqrt(delta)) / (2.0*a);
	}

	return;
}

