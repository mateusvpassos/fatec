#include <stdio.h>
int main(){
	
	double horas, kmh; 
	double total;
	
	scanf("%lf %lf", &horas, &kmh);
	
	total=(kmh/12)*horas;
	
	printf("%.3lf\n", total);
	
	return 0;
}
