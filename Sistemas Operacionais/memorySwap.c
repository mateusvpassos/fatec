/*

	ANA CARLA
	MATEUS VINICIUS
	PETERSON MATOS
	SUELI 
	
	Date: 18/04/19 07:48
	
*/


#include<stdio.h> // stdio.h padr�o
#include<locale.h> // locale.h para a fun��o setlocale para por em portugu�s e aceitar acentos
#include<windows.h> // windows.h para a fun��o system();
#include<conio.h> // conio.h para a fun��o getch();

#define N 5 // N � o tamanho da matriz

// prototipa��o das fun��es
void menu(int memoriaPrincipal[N], int memoriaSecundaria[N]);
void limparMemoriaPrincipal(int memoriaPrincipal[N]);
void limparMemoriaSecundaria(int memoriaSecundaria[N]);
void alocarProcessoMemoriaPrincipal(int memoriaPrincipal[N]);
void swapOut(int memoriaPrincipal[N], int memoriaSecundaria[N]);
void swapIn(int memoriaPrincipal[N], int memoriaSecundaria[N]);
void listarMemoriaPrincipal(int memoriaPrincipal[N]);
void listarMemoriaSecundaria(int memoriaSecundaria[N]);
void gerenciadorDeTarefas(int memoriaPrincipal[N], int memoriaSecundaria[N]);
void encerrarProcesso(int processo, int memoriaPrincipal[N]);
void removerProcesso(int processo, int memoriaSecundaria[N]);

int main (){
	setlocale(LC_ALL, "Portuguese");
	int memoriaPrincipal[N];
	int memoriaSecundaria[N];
	
	// limpar as mem�rias antes de usar, define tudo como 0
	limparMemoriaPrincipal(memoriaPrincipal);
	limparMemoriaSecundaria(memoriaSecundaria);
	
	while(1){
		// chamar o menu infinitamente at� que seja escolhido sair
		menu(memoriaPrincipal, memoriaSecundaria);
		
	}
	
	return 0;
}
void menu(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	printf("\n1 - Limpar Mem�ria Principal\n");
	printf("2 - Limpar Mem�ria Secund�ria\n");
	printf("3 - Alocar processo na Mem�ria Principal\n");
	printf("4 - Swap Out\n");
	printf("5 - Swap In\n");
	printf("6 - Listar Mem�ria Principal\n");
	printf("7 - Listar Mem�ria Secund�ria\n");
	printf("8 - Gerenciador de Tarefas\n");
	printf("9 - Sair\n");
	printf("\n\nEscolha uma op��o: ");	
	int selecao;
	scanf("%d", &selecao);
	fflush(stdin);
		
	if(selecao==1){
		limparMemoriaPrincipal(memoriaPrincipal);
	}else if(selecao==2){
		limparMemoriaSecundaria(memoriaSecundaria);
	}else if(selecao==3){
		alocarProcessoMemoriaPrincipal(memoriaPrincipal);
	}else if(selecao==4){
		swapOut(memoriaPrincipal, memoriaSecundaria);
	}else if(selecao==5){
		swapIn(memoriaPrincipal, memoriaSecundaria);
	}else if(selecao==6){
		listarMemoriaPrincipal(memoriaPrincipal);
	}else if(selecao==7){
		listarMemoriaSecundaria(memoriaSecundaria);
	}else if(selecao==8){
		gerenciadorDeTarefas(memoriaPrincipal, memoriaSecundaria);
	}else if(selecao==9){
		exit(0);
	}else{
		// se a op��o for nenhuma de a 9, mostra op��o inv�lida
		printf("\nOp��o Inv�lida\n");
		return;
	}
}
void limparMemoriaPrincipal(int memoriaPrincipal[N]){
	// define tudo da mem�ria principal como 0
	printf("\n");
	system("cls");
	printf("Limpando Mem�ria Principal .");
	Sleep(300); // Sleep faz o programa "dormir" o tempo � em milisegundos, 1000 seria 1 segundo
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(300);
	int i=0;
	for(i=0;i<N;i++){
		memoriaPrincipal[i]=0;
	}
	// system("cls") faz limpar a telinha, system serve para usar os comandos do cmd
	system("cls");
}
void limparMemoriaSecundaria(int memoriaSecundaria[N]){
	// define tudo da mem�ria secund�ria como 0
	printf("\n");
	system("cls");
	printf("Limpando Mem�ria Secund�ria .");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".\n");
	Sleep(300);
	int i=0;
	for(i=0;i<N;i++){
		memoriaSecundaria[i]=0;
	}
	system("cls");
}
void alocarProcessoMemoriaPrincipal(int memoriaPrincipal[N]){
	// alocar um c�digo de processo na mem�ria principal
	printf("\n");
	printf("Digite o c�digo do processo para alocar na mem�ria principal: ");
	int numeroProcesso, i=0;
	scanf("%d", &numeroProcesso);
	fflush(stdin);
	if(numeroProcesso==0){
		// Esse c�digo n�o poder� ser 0
			printf("C�digo de processo n�o pode ser 0!\n");
			// pressione tecla para continuar, o getch() para o programa at� q aperte qualquer tecla
			printf("\nPressiona qualquer tecla para continuar ");
			getch();
			system("cls");
			return;
		}
	for(i=0;i<N;i++){
		if(memoriaPrincipal[i]==numeroProcesso){
			// e nem pode ser repetido
			printf("%d - Processo j� existente!\n", numeroProcesso);
			printf("\nPressiona qualquer tecla para continuar ");
			getch();
			system("cls");
			return;
		}
	}
	
	for(i=0;i<N;i++){
		if(memoriaPrincipal[i]==0){
			// se encontrar espa�o em branco, alocar� nele
			memoriaPrincipal[i]=numeroProcesso;
			printf("\nProcesso alocado no espa�o [%d]\n", i);
			Sleep(700);
			break;
		}else if(i==N-1){
			// se n�o, exibir� este erro
			printf("\nN�o h� espa�o na mem�ria principal, libere espa�o!\n");
			printf("Pressione qualquer tecla para continuar ");
			getch();
		}
	}
	system("cls");
}
void swapOut(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	// swap out tira o processo da mem�ria principal e passa para a secund�ria em um espa�o em branco
	printf("\n");
	listarMemoriaPrincipal(memoriaPrincipal);
	printf("Digite o c�digo do processo para realizar o Swap-Out: ");
	int numeroProcesso, i=0, j=0;
	scanf("%d", &numeroProcesso);
	fflush(stdin); // fflush(stdin) limpa mem�ria do teclado
	if(numeroProcesso==0){
		// n�o h� swap out de 0
		printf("O c�digo n�o pode ser 0\n");
		printf("Pressione qualquer tecla para continuar ");
		getch();
		system("cls");
		return;
	}
	for(i=0;i<N;i++){
		if(memoriaPrincipal[i]==numeroProcesso){

			
			for(j=0;j<N;j++){
				if(memoriaSecundaria[j]==0){
					// se encontrar o c�digo ele realizar� o processo e sair� do (for)
					memoriaSecundaria[j]=numeroProcesso;
					printf("\nSwap-Out realizado com sucesso!\n");
					memoriaPrincipal[i]=0;
					Sleep(700);
					return;
				}else if(j==N-1){
					// se n�o houver mais espa�o na mem�ria secund�ria
					printf("\nN�o h� espa�o na mem�ria secund�ria, libere espa�o!\n");
					printf("Pressione qualquer tecla para continuar ");
					getch();
					system("cls");
					return;
				}
			}
			break;
		}
	}
	// se n�o encontrar o processo ir� mostrar o erro
	printf("\nError 404: Processo n�o encontrado na mem�ria principal!\n");
	printf("Pressione qualquer tecla para continuar ");
	getch();
	system("cls");
	return;
}
void swapIn(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	//mover da mem�ria secund�ria para a principal
	printf("\n");
	listarMemoriaSecundaria(memoriaSecundaria);
	printf("Digite o c�digo do processo para realizar o Swap-In: ");
	int numeroProcesso, i=0, j=0;
	scanf("%d", &numeroProcesso);
	fflush(stdin);
	if(numeroProcesso==0){
		// n�o h� swap in de 0
		printf("O c�digo n�o pode ser 0\n");
		printf("Pressione qualquer tecla para continuar ");
		getch();
		system("cls");
		return;
	}
	for(i=0;i<N;i++){
		if(memoriaSecundaria[i]==numeroProcesso && numeroProcesso!=0){
			
			for(j=0;j<N;j++){
				if(memoriaPrincipal[j]==0){
					memoriaPrincipal[j]=numeroProcesso;
					printf("\nSwap-In realizado com sucesso!\n");
					memoriaSecundaria[i]=0;
					Sleep(700);
					return;
				} else if(j==N-1){
					// se n�o houver mais espa�o na mem�ria prim�ria
					printf("\nN�o h� espa�o na mem�ria principal, libere espa�o!\n");
					printf("Pressione qualquer tecla para continuar ");
					getch();
					system("cls");
					return;
				}
			}
			break;
		}
	}
	printf("\nError 404: Processo n�o encontrado na mem�ria secund�ria!\n");
	printf("Pressione qualquer tecla para continuar ");
	getch();
	system("cls");
	return;
}
void listarMemoriaPrincipal(int memoriaPrincipal[N]){
	// listar mem�ria principal
	printf("\n");
	int i=0;
	system("cls");
	printf("Lista Mem�ria Principal: \n");
	for(i=0;i<N;i++){
		printf("Posi��o[%d]: %d \n", i, memoriaPrincipal[i]);
	}
	printf("\n");
}
void listarMemoriaSecundaria(int memoriaSecundaria[N]){
	//listar mem�ria secund�ria
	printf("\n");
	int i=0;
	system("cls");
	printf("Lista Mem�ria Secund�ria: \n");
	for(i=0;i<N;i++){
		printf("Posi��o[%d]: %d \n", i, memoriaSecundaria[i]);
	}
	printf("\n");
}
void gerenciadorDeTarefas(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	// menu para remover ou finalizar processos
	system("cls");
	printf("\n1 - Finalizar Processo da Mem�ria Principal\n");
	printf("2 - Remover Processo da Mem�ria Secund�ria\n");
	printf("3 - Voltar\n");
	int selecao, processo;
	printf("\nEscolha uma op��o: ");
	scanf("%d", &selecao);
	if(selecao==1){
		listarMemoriaPrincipal(memoriaPrincipal);
		printf("\nDigite o c�digo do processo a ser finalizado: ");
		scanf("%d", &processo);
		encerrarProcesso(processo, memoriaPrincipal);
	}else if(selecao==2){
		listarMemoriaSecundaria(memoriaSecundaria);
		printf("\nDigite o c�digo do processo a ser removido: ");
		scanf("%d", &processo);
		removerProcesso(processo, memoriaSecundaria);
	}else if(selecao==3){
		return;
	}else{
		printf("Op��o inv�lida!");
		return;
	}
}
void encerrarProcesso(int processo, int memoriaPrincipal[N]){
	// fun��o para encerrar processo principal
	int i=0;
	for(i=0;i<N;i++){
		if(processo==memoriaPrincipal[i]){
			printf("Processo %d encerrado!\n", memoriaPrincipal[i]);
			memoriaPrincipal[i]=0;
		}
	}
	return;
}
void removerProcesso(int processo, int memoriaSecundaria[N]){
	// fun��o para finalizar processo secund�rio
	int i=0;
	for(i=0;i<N;i++){
		if(processo==memoriaSecundaria[i]){
			printf("Processo %d removido!\n", memoriaSecundaria[i]);
			memoriaSecundaria[i]=0;
		}
	}
	return;
}
