#include<stdio.h>
void le_matriz(int m[3][3]){
	int i,j, li;
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("\ndigite matriz[%d][%d]", i, j);
				scanf("%d", &m[i][j]);
			}
		}
		return;
}
int soma_linha(int m[3][3], int i){
	int j, soma=0;
	
	for(j=0;j<3;j++)
		soma=soma+m[i][j];
	return soma;
}
main(){
	int mat[3][3], soma, li;
	le_matriz(mat);
	printf("DIGITE UMA LINHA: ");
	scanf("%d", &li);	
	soma = soma_linha(mat, li);
	printf("A SOMA É: %d", soma);
}
