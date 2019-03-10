#include<stdio.h>
void le_matriz(int m[4][4]){
	int i,j;
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				printf("\ndigite matriz[%d][%d]", i, j);
				scanf("%d", &m[i][j]);
			}
		}
		return;
}
int maior_valor(int m[4][4]){
	int i, j, maior=m[0][0];
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(m[i][j]>maior)
					maior = m[i][j];
		}
	}
	return maior;
}
main(){
	int mat[4][4], m=0;
	le_matriz(mat);
	m = maior_valor(mat);
	printf("MAIOR VALOR DA MATRIZ: %d", m);
}
