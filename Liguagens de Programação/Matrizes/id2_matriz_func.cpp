#include <stdio.h>
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
			printf("\t%3", mat[i][j]);
	printf("\n");
}
return;
}
int verifica_ident (int mat[3][3]){
	int i,j, id=1;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(i==j){
				if(mat[i][j] != 1)
					id=0;
			}
			else if(mat[i][j] != 0)
				id=0;
				return id;
}
main(){
	int m1[3][3], m2[3][3], id1, id2;
	printf("MATRIZ1\n");
	le_matriz(m1);
	printf("\nMATRIZ2\n");
	le_matriz(m2);
	id1=verifica_ident(m1);
	id2=verifica_ident(m2);
	printf("\nMatriz1\n");
	exibe_matriz(m1);
	if(id1)
		printf("\nAmtriz é identidaide");
		else printf("\nAntriz nao e identidade");
		printf("\n\nMatris2 \n");
		exibe_matriz(m2);
		if(id2)
		printf("\nAmtriz é identidaide");
		else printf("\nAntriz nao e identidade");
}
