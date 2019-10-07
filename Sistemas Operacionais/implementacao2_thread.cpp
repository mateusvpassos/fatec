#include<process.h> // MANIPULAR PROCESSOS E THREADS
#include<stdio.h> // ATIVIDADES DE ENTRADA E SAIDA
#include<windows.h> // DECLARACOES DO WINDOWS PARA TODAS AS FUNCOES
int tempo = 0; // VARIAVEL TEMPO INTEIRO RECEBE 0

void relogio (void *i); // FUNCAO VOID RECEBE PARAMETRO PONTEIRO I
int main(){ // PROGRAMA PRINCIPAL
	_beginthread(relogio, NULL, 0); // INICIA THREAD RELOGIO
	while(1){ // ENQUANTO FOR 1
		printf("Programa aberto faz %i segundos. \n", tempo); // EXIBE VARIAVEL TEMPO
		getchar(); // PAUSA
	}
	return 0; // RETORNA 0
}
void relogio (void *i){ // FUNCAO DO TIPO VOID RECEBE PONTEIRO I
	while(1){ // ENQUANTO FOR 1
		Sleep(1000); // ESPERA POR 1 SEGUNDO
		tempo++; // INCREMENTA O TEMPO EM 1s
	}
}

