#include<stdio.h>
int dentro_ret(int, int, int, int, int, int);
int main(){
	
	int x0, y0, x1, y1, x, y, res=0;
	scanf("%d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x, &y);
	
	res=dentro_ret(x0, y0, x1, y1, x, y);
	
	if(res==1){
		printf("INTERNO\n");
	}else{
		printf("EXTERNO\n");
	}
	return 0;
}
int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
	int res;
	
	if(x>=x0 && x<=x1 && y>=y0 && y<=y1){
		return 1;
	}else{
		return 0;
	}
}
