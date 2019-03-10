//funçao que receba como parametro de entrada o peso e a altura de uma pessoa. calcule e retorne
//o valor do IMC.
#include <stdio.h>
 float calc_imc(float alt, float peso){
 	float im;
 	im=peso/(alt*alt);
 	return im;
 }
 //funçao que receba como parametro de entrada um vetor de 20 posições de inteiros. 
 //retorna a quantidade de numeros maiores que 10;
 int maior_vet(int v[20]){
 	int maior=0, i=0;
 	for(i=0;i<20;i++){
 		if(v[i]>10){
 			maior++;
		 }
	 }
 	return maior;
 }
 //funçao que receba como parametro entrada de um vetoor de 15 posiçoes de inteiros e
 //o retorne ordenado em ordem crescente.
 void ordena(int v[15]){
 	int i,j,aux;
 	for(j=14;j>0;j--)
 		for (i=0;i<j;i++)
 			if(v[i]>v[i+1]){
 				aux=v[i];
 				v[i]=v[i+1];
 				v[i+1]=aux;
			 }
	 return;
 }
 //funçao que receba como parametro de entrada uma matriz 4x4. calcule e retorne o maior, 
 //elemento da matriz (elementos: inteiros)
 
 int maior_elem(int mat[4][4]){
 	int i,j,maior;
 	for(i=0;i<4;i++)
 		for(j=0;j<4;j++)
 			if(mat[i][j]>maior)
 				maior=mat[i][j];
 	return;
 }

