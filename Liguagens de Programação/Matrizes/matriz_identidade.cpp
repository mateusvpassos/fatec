//VERIFICAR SE É MATRZ IDENTIDADE  TODOS ELEMENTO DA DIAGONAL PRINC SAO 1 E O RESTO É 0;
#include <stdio.h>
main(){
	int mat[4][4],i ,j, id=1;
	//LER MATRIZ1
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\ndigite matriz[%d][%d]", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	//VERIFICAR SE É IDENTIDADE
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				if(mat[i][j]!=1)
					id=0;
				}
				else if(mat[i][j]!=0)
					id=0;
			}
		}
	//EXIBIR
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\t %3d", mat[i][j]);	
		}
		printf("\n");
	}
	//EXIBIÇAO DA MSG
	if(id==1)
		printf("\n\n A matriz e identidade!");
	else printf("\n\n Nao e identidade!");
}
	
