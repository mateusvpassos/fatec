#include <stdio.h>
void harmonica(int numero, float *resultado);
int main(){
	
	int numero;
	float resultado=0;
	scanf("%d", &numero);
	
	harmonica(numero, &resultado);
	
	printf("%.8f", resultado);
	
	return 0;
}
void harmonica(int numero, float *resultado){
	int i;
	
	for(i=1; i<=numero; i++){
		*resultado=1.0/i+(*resultado);
	}
	
}
