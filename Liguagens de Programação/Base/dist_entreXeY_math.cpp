//SQRT É RAIZ POW É ELEVADO,, sqrt(conta); pow(conta,n elevado); 
#include<stdio.h>
#include<math.h>
float calcula_distancia(float x1, float y1, float x2, float y2){
	float dist;
	dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return dist;
}
main(){
	float xa,xb,ya,yb;
	float distancia;
	printf("\nDIGITE A COORDENADA X1: ");
	scanf("%f", &xa);
	printf("\nDIGITE A COORDENADA Y1: ");
	scanf("%f", &ya);
	printf("\nDIGITE A SEGUNDA COORDENADA X2: ");
	scanf("%f", &xb);
	printf("\nDIGITE A SEGUNDA COORDENADA Y2: ");
	scanf("%f", &yb);
	distancia = calcula_distancia(xa,ya,xb,yb);
	
	printf("A DISTANCIA É: %f", distancia);
}

