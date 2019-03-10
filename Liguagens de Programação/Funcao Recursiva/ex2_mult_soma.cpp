#include <stdio.h>
int multiplicacaoSomativa(int x, int y){
	if(y==1)
		return x;
	else{
		return x+ multiplicacaoSomativa(x,y-1);
	}
}
main(){
	int x,y;
	printf("digite 2 numero para multiplicar: ");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d", multiplicacaoSomativa(x,y));
}
