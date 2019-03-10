#include <stdio.h>
int main(){
	
	double pi=3.14159;
	double a, b, c, result;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	result=(a*c)/2;
	printf("TRIANGULO: %.3lf\n", result);
	
	result=pi*(c*c);
	printf("CIRCULO: %.3lf\n", result);
	
	result=((a+b)*c)/2;
	printf("TRAPEZIO: %.3lf\n", result);
	
	result=b*b;
	printf("QUADRADO: %.3lf\n", result);
	
	result=a*b;
	printf("RETANGULO: %.3lf\n", result);
	
	return 0;
}
