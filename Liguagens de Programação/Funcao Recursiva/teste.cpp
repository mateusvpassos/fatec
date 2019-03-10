#include<stdio.h>
#include<math.h>
int fatorial(int x){
	if(x==1)
		return 1;
	else return x*fatorial(x-1);
}
main(){
	int b=4,a;
	a=fatorial(b);
	printf("%d", a);
}
