#include <stdio.h>
void le_matriz(int mat[3][3]){
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("\nElemEnto[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
	}
return;
}
void exibe_matriz (int mat[3][3]){
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("\t%3d", mat[i][j]);
	printf("\n");
}
return;
}
main(){
	int m1[3][3], m2[3][3], m3[3][3];
	printf("matriz1\n");
	le_matriz(m1);
	printf("matriz2\n");
	le_matriz(m2);
	printf("matriz3\n");
	le_matriz(m3);
	printf("\n\nMATRIZ1");
	exibe_matriz(m1);
	printf("\n\nMATRIZ2");
	exibe_matriz(m2);
	printf("\n\nMATRIZ3");
	exibe_matriz(m3);
	
}

