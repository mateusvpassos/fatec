#include <stdio.h>
int main() {
	
	int codP1, codP2, numP1, numP2;
	double vP1, vP2;
	double total;
	
	scanf("%d %d %lf", &codP1, &numP1, &vP1);
	scanf("%d %d %lf", &codP2, &numP2, &vP2);
	
	total=(numP1*vP1)+(numP2*vP2);
   	printf("VALOR A PAGAR = R$ %.2lf\n", total);
   
	return 0;
}
