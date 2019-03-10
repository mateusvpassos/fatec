#include <stdio.h>
#define TAM 4
typedef unsigned long int natural;
natural ack(int x, int y);
 
int main(){
	int i, j;
	for (i = 0; i <= TAM; i++){
		for (j = 0; j <= i; j++){
			int valor = ack(i, j);
			printf("Ack (%d, %d) = %lu\n", i, j, valor);
		}
	}
	return 0;
}
 
natural ack(int x, int y){
	if (x == 0){
		return y+1;
	}else if (y == 0){
		return ack(x - 1, 1);
	}else{
		natural resp = ack(x, y - 1);
		return ack(x - 1, resp);
	}
}
