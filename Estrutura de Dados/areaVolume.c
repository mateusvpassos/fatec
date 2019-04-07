#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
void esfera(float raio, float *area, float *volume);

int main(){
	
	float raio, area, volume;

	scanf("%f", &raio);

	esfera(raio, &area, &volume);
	
	printf("%.2f\t", area);
	printf("%.2f", volume);
	
	return 0;
}

void esfera(float raio, float *area, float *volume){
	
	*volume=4*PI*pow(raio,3)/3;
	*area=4*PI*pow(raio,2);
	
	return ;
}
