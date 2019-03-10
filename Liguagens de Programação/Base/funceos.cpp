//funçao que receba como parametro de entrada 2 matrizes 3x3 e retorne uma 3ªmatriz
//sendo a multiplicaçao das 2 primeiras
void mult_mat(mat[3][3], mat1[3][3]){
	int matx[3][3], i, j, k;
	//zerar 
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			mx[i][j]= 0;
	//gerar mult
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
				mx[i][j]=mx[i][j]+mat[i][k]*mat1[k][j];
	return;
}
//funçao que receba como parametro de entrada uma matriz 3x3
//e retorne a soma da diagonal principal
int somaDP(int mat[3][3]){
	int i, soma=0;
	for(i=0;i<3;i++)
		soma=soma+mat[i][i];
	return soma;
}
//funçao que receba como parametro de entrada um vetor de 20 posiçoes de inteiros
//e um nº inteiro x. retorne quantos elementos do vetor são divisoes pelo nºx.
int conta_div(int vet[20], int x){
	int i, qtd=0;
	for(i=0;i<20;i++)
		if(vet[i]%x==0)
			qtd++;
	return qtd;
}
//funçao que receba como parameotr de entrada um vetor de 15 posiçoes
//de inteiros. retorne um segundo vetor com os valores invertidos.
void inverter(int v1[15],int v2[15]){
	int i;
	for(i=0;i<15;i++)
		v2[i]=v1[14-1];
	return;
}
ou 
int i,j;
j=14;
for(i=0;i<15;i++){
	v2[i]=v2[j];
	j--;
}
return;

//ESCREVER A BOSTA DO PROGRAMA DE TODOS oe x acima


----------------------80 COLUNAS------------------------------
|
|
|
|24 LINHAS
|
|
|
