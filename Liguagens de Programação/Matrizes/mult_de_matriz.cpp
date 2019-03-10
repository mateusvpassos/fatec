//ESCREVER UM PROGRAMA QUE LEIA 2 MATRIZES 3X3. GERAR A MATRIZ MULTIPLICAÇÃO
//EXIBIR AS 3 MATRIZES NO FORMATO DE MATRIZ. 
#include <stdio.h>
main(){
	int mat[3][3], mat1[3][3], matF[3][3],i ,j, k;
	//LER MATRIZ1
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite matriz[%d][%d]", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	//LER MATRIZ2
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite matriz2[%d][%d]", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	//ZERAR MATRIZ DE MULTIPLICATION POR CAUSA DO LIXO
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matF[i][j]=0;		
		}
	}
	//MULTIPLICAR MATRIZ
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				//K NO 1 NO FINAL K NO 2 NO COMEÇO
				matF[i][j]=matF[i][j]+mat[i][k]*mat1[k][j];
			}
		}
	}
	//EXIBIR
	//MATRIZ1
	printf("\n\nMatriz1\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t %3d", mat[i][j]);
	}
		printf("\n");
	}
	//MATRIZ2
	printf("\n\nMatriz2\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t %3d", mat1[i][j]);
	}
		printf("\n");
	}
	//MATRIZMULT
	printf("\n\nMatrizMultiplicada\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t %3d", matF[i][j]);
	}
		printf("\n");
	}
}
