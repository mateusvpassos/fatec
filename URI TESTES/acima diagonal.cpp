#include <stdio.h>
int main(){
    double soma=0.0, media=0.0, matriz[12][12];
    char tipo[2];
    
    int x,y,p=1;
    scanf("%s", &tipo);
    
    for(x=0; x<=11; x++){
        for(y=0; y<=11; y++){
        	scanf("%lf", &matriz[x][y]);
		}
    }
    for(x=0; x<=11; x++){
        for(y=p; y<=11;y++){
        	soma+=matriz[x][y];
		} 
        p++;
    }
    if(tipo[0]=='S'){
    	printf("%.1lf\n",soma);
	}    
    else if(tipo[0]=='M'){
        media=soma/66.0;
        printf("%.1lf\n", media);
    }
    return 0;
}
