#include <process.h> // BIBLIOTECA PARA MANIPULAR PROCESSOS E THREADS
#include <stdio.h> // BIBLIOTECA PARA ENTRADA E SAIDA DE DADOS
#include <windows.h> // DECLARAÇOES DO WINDOWS PARA TODAS AS FUNCOES

void MeuThread(void *i); // FUNCAO VOID MeuThread COM PARAMETRO VOID PONTEIRO DE I
char frase[100]; // CRIA UMA CADEIA DE CARACTERES TAMANHO 100
int k = 1; // INICIA INTEIRO K COM VALOR 1
int main(){ // INICIA O MAIN
	
	puts("Vou ligar o Threads enquanto voce passa caracteres"); // EXIBE TEXTO
	_beginthread(MeuThread, NULL, 0); // INICIA A THREAD MeuThread
	puts("Digite alguns caracteres"); // EXIBE O TEXTO
	gets(frase); // RECEBE CARACTERES PARA VARIAVEL frase
	k=0; // DEFINE K COM VALOR 0
	puts(frase); // EXIBE O CONTEÚDO DA VARIAVEL frase
	system("pause"); // COMANDO pause DO WINDOWS CMD
	
	return 0; // RETORNA 0
}
void MeuThread(void *i){ // IMPLEMENTACAO DE MeuThread
	while(k){ // ENQUANTO K FOR 1(TRUE) QUANDO 0 (FALSE)
		Sleep(1000); // ESPERA POR 1s
		puts(" "); // PULA LINHA
		puts("Oi, eu sou um Thread"); // EXIBE TEXTO
		puts(" "); // PULA LINHA
	}
}
