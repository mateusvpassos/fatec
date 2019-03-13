#include<stdio.h>
void dentro_ret(int, int, int, int, int, int, int*);
int main(){
	
	int x0, y0, x1, y1, x, y, res;
	scanf("%d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x, &y);
	
	dentro_ret(x0, y0, x1, y1, x, y, &res);
	
	if(res==1){
		printf("INTERNO\n");
	}else{
		printf("EXTERNO\n");
	}
	return 0;
}
void dentro_ret(int x0, int y0, int x1, int y1, int x, int y, int *res){
	
	if(x0<x1){
		if(x>=x0 && x<=x1 && y>=y0 && y<=y1){
			*res=1;
		}else{
			*res=0;
		}
	}else if(x1<x0){
		if(x>=x1 && x<=x0 && y>=y0 && y<=y1){
			*res=1;
		}else{
			*res=0;
		}
	}
	
	
}
