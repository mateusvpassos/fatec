#include<stdio.h>
void matrizSomaMedia(double matriz[][12], int linha, char tipo[2]){
	double soma=0.0, media;
	int x, y;
    for(x=0;x<=11;x++){
        for(y=0; y<=11; y++){
        	scanf("%lf", &matriz[x][y]);
        }
    }
    
    for(x=0;x<=11;x++){
        soma+=matriz[linha][y];
	}
	media=soma/12.0;
    if(tipo[0]=='S'){
    	printf("%.1lf\n", soma);
	}
    else if(tipo[0]=='M'){
        media=soma/12.0;
        printf("%.1lf\n", media);
    }
    
}
int main(){
    double matriz[12][12];
    char tipo[2];
    int linha;
    scanf("%d", &linha);
    scanf("%s", &tipo);
    
    matrizSomaMedia(matriz, linha, tipo);

    return 0;
}
