#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
	Mateus Vinícius dos Passos
	3º ADS Noturno
	RA = 0210481823027
*/

//Protótipo da função
void calculaFrequenciaEMedia (char* string, int* quantidadeDePalindromos, long* frequenciaDaLetra, double* tamanhoMedioDasStrings, char letraParaAFrequencia);
int stringLen (char* string);

int main()	{
	setlocale(LC_ALL, NULL);
	int quantidadeDeVezesALer; 
	char letraParaAFrequencia;
	//Ler Quantidade de Vezes e Letra
	scanf("%d %c", &quantidadeDeVezesALer, &letraParaAFrequencia);
	fflush(stdin);
	//Ponteiros para respostas
	int quantidadeDePalindromos = 0;
	long frequenciaDaLetra = 0;
	double tamanhoMedioDasStrings = 0.0;
	//Lendo e Calculando
	int iterador;
	iterador = 0;
	char string[100];
	while (iterador < quantidadeDeVezesALer)	{
		//Ler String
		fflush(stdin);
		if (quantidadeDeVezesALer <= 0 || quantidadeDeVezesALer >200)	{
			break;
		}
		scanf("%s", string);
		fflush(stdin);
		calculaFrequenciaEMedia (string, &quantidadeDePalindromos, &frequenciaDaLetra, &tamanhoMedioDasStrings, letraParaAFrequencia);
		iterador = iterador + 1;
	}
	printf("PALINDROMAS = %d", quantidadeDePalindromos);
	printf("\n");
	printf("FREQUENCIA = %ld", frequenciaDaLetra);
	printf("\n");
	tamanhoMedioDasStrings = (double) tamanhoMedioDasStrings / quantidadeDeVezesALer;
	if (quantidadeDeVezesALer != 0)	{
		printf("TAMANHO MEDIO = %.2lf", tamanhoMedioDasStrings);
	}	else	{
		printf("TAMANHO MEDIO = 0.00");
	}
	printf("\n");
	
	return 0;
}
void calculaFrequenciaEMedia (char* string, int* quantidadeDePalindromos, long* frequenciaDaLetra, double* tamanhoMedioDasStrings, char letraParaAFrequencia)	{
	int tamanhoString = stringLen(string);
	*tamanhoMedioDasStrings = *tamanhoMedioDasStrings + tamanhoString;
	char* palindromoTeste = (char*) malloc(tamanhoString*sizeof(tamanhoString)+1);
	int iterador;
	int resultado;
	int iteradorRev;
	resultado = 0;
	iterador = 0;
	iteradorRev = tamanhoString-1;
	
	for (iterador=0 ; iterador<tamanhoString ; iterador++)	{
		
		palindromoTeste[iteradorRev] = string[iterador];
		iteradorRev = iteradorRev - 1;
		
	}
	palindromoTeste[tamanhoString] = '\0';
	
	for(iterador=0; iterador<tamanhoString; iterador++){
		if (string[iterador]==letraParaAFrequencia)	{
			*frequenciaDaLetra = *frequenciaDaLetra + 1;
		}
		if (palindromoTeste[iterador] == string[iterador])	{
			resultado = 1;
		}	else	{
			resultado = 0;
		}
		
	}
	if (resultado == 1)	{
			*quantidadeDePalindromos = *quantidadeDePalindromos + 1;
	}	else	{
			*quantidadeDePalindromos = *quantidadeDePalindromos;
	}
	
	
	
}

int stringLen (char* string){
	int contador;
	int iterador;
	contador = 0;
	iterador = 0;
	
	for(iterador=0 ; string[iterador]!='\0'; iterador++){
		contador = contador + 1;
	}
	
	return contador;
}
