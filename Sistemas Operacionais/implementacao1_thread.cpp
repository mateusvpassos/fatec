#include <iostream> //INCLUINDO BIBLIOTECA DE ENTRADA E SAIDA DE C++
using namespace std; // CRIANDO UM ESPAÇO DE PROGRAMAÇAO (std) - std::cout
#include <process.h> // INCLUINDO BIBLIOTECA PARA SE USAR PROCESSOS E THREADS
#include <windows.h>
// BIBLIOTECA PARA USAR FUNCOES DE CRuntime Library
bool thread_ligada; // VARIAVEL BOOLEAN PARA INDICAR THREAD LIGADA OU DESLIGADA (thread_ligada)

void escreveAlgo(void *p){ // DECLARACAO DA FUNCAO, DEFININDO SEU RETORNO (VOID), NOME (escreveAlgo), PARAMETROS(void *p)
	while(thread_ligada){ // INICIO DO LAÇO DE REPETICAO COM O PARAMETRO (thread_ligada)
		cout << "Executando thread..."
		<< endl; // EXIBINDO MENSAGEM DE EXECUCAO, endl (FINALIZA A MENSAGEM)
		Sleep(500);
	} // FIM DO LAÇO
} // FIM DA FUNCAO
int main(){ // INICIO DO PROGRAMA(main)

	cout << "Digite ENTER para iniciar e parar a thread..." << endl; // EXIBINDO MENSAGEM PARA O INICIO E FIM DA THREAD(enter)
	cin.get(); // ENTRADA DE DADOS
	thread_ligada = true; // DEFININDO VARIAVEL COMO VERDADEIRA (thread_ligada)
	_beginthread(escreveAlgo, NULL, 0); //CRIAR E EXECUTAR UMA THREAD, FUNCAO PASSADA COMO PARAMETRO PARA NOVA THREAD
	cin.get(); // ENTRADA DE DADOS
	thread_ligada = false; // DEFININDO VARIAVEL COMO FALSA (thread_ligada)
	
	return 0; // RETORNA 0 PARA A FUNCAO (main)
} // FIM DO PROGRAMA(main)
