#include<stdio.h>
void le_matriz(int mat[3][3]){
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("\nElemento [%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
		}
		return;
}
void exibe_matriz(int mat[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("/t%3d ", mat[i][j]);
		}
		printf("\n");
	}
	return;
}
void mult_mat(int m1[3][3], int m2[3][3], int m3[3][3]){
	int i,j,k;
	//ZERAR MATRIZ
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m3[i][j]=0;
		}
	}
	//MULTIPLICAÇAO
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++)
			m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
		}
	}
	return;
}
main(){
	int ma[3][3], mb[3][3],mc[3][3];
	printf("Leitura matriz1: \n");
	le_matriz(ma);
	printf("Leitura matriz2: \n");
	le_matriz(mb);
	mult_mat(ma,mb,mc);
	printf("\n\nMatriz A\n");
	exibe_matriz(ma);
	printf("\n\nMatriz B\n");
	exibe_matriz(mb);
	printf("\n\nMatriz C\n");
	exibe_matriz(mc);
}
