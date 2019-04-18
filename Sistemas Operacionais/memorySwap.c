/*

	ANA CARLA
	MATEUS VINICIUS
	PETERSON MATOS
	SUELI 
	
	Date: 18/04/19 07:48
	
*/


#include<stdio.h> // stdio.h padrão
#include<locale.h> // locale.h para a função setlocale para por em português e aceitar acentos
#include<windows.h> // windows.h para a função system();
#include<conio.h> // conio.h para a função getch();

#define N 5 // N é o tamanho da matriz

// prototipação das funções
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
	
	// limpar as memórias antes de usar, define tudo como 0
	limparMemoriaPrincipal(memoriaPrincipal);
	limparMemoriaSecundaria(memoriaSecundaria);
	
	while(1){
		// chamar o menu infinitamente até que seja escolhido sair
		menu(memoriaPrincipal, memoriaSecundaria);
		
	}
	
	return 0;
}
void menu(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	printf("\n1 - Limpar Memória Principal\n");
	printf("2 - Limpar Memória Secundária\n");
	printf("3 - Alocar processo na Memória Principal\n");
	printf("4 - Swap Out\n");
	printf("5 - Swap In\n");
	printf("6 - Listar Memória Principal\n");
	printf("7 - Listar Memória Secundária\n");
	printf("8 - Gerenciador de Tarefas\n");
	printf("9 - Sair\n");
	printf("\n\nEscolha uma opção: ");	
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
		// se a opção for nenhuma de a 9, mostra opção inválida
		printf("\nOpção Inválida\n");
		return;
	}
}
void limparMemoriaPrincipal(int memoriaPrincipal[N]){
	// define tudo da memória principal como 0
	printf("\n");
	system("cls");
	printf("Limpando Memória Principal .");
	Sleep(300); // Sleep faz o programa "dormir" o tempo é em milisegundos, 1000 seria 1 segundo
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
	// define tudo da memória secundária como 0
	printf("\n");
	system("cls");
	printf("Limpando Memória Secundária .");
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
	// alocar um código de processo na memória principal
	printf("\n");
	printf("Digite o código do processo para alocar na memória principal: ");
	int numeroProcesso, i=0;
	scanf("%d", &numeroProcesso);
	fflush(stdin);
	if(numeroProcesso==0){
		// Esse código não poderá ser 0
			printf("Código de processo não pode ser 0!\n");
			// pressione tecla para continuar, o getch() para o programa até q aperte qualquer tecla
			printf("\nPressiona qualquer tecla para continuar ");
			getch();
			system("cls");
			return;
		}
	for(i=0;i<N;i++){
		if(memoriaPrincipal[i]==numeroProcesso){
			// e nem pode ser repetido
			printf("%d - Processo já existente!\n", numeroProcesso);
			printf("\nPressiona qualquer tecla para continuar ");
			getch();
			system("cls");
			return;
		}
	}
	
	for(i=0;i<N;i++){
		if(memoriaPrincipal[i]==0){
			// se encontrar espaço em branco, alocará nele
			memoriaPrincipal[i]=numeroProcesso;
			printf("\nProcesso alocado no espaço [%d]\n", i);
			Sleep(700);
			break;
		}else if(i==N-1){
			// se não, exibirá este erro
			printf("\nNão há espaço na memória principal, libere espaço!\n");
			printf("Pressione qualquer tecla para continuar ");
			getch();
		}
	}
	system("cls");
}
void swapOut(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	// swap out tira o processo da memória principal e passa para a secundária em um espaço em branco
	printf("\n");
	listarMemoriaPrincipal(memoriaPrincipal);
	printf("Digite o código do processo para realizar o Swap-Out: ");
	int numeroProcesso, i=0, j=0;
	scanf("%d", &numeroProcesso);
	fflush(stdin); // fflush(stdin) limpa memória do teclado
	if(numeroProcesso==0){
		// não há swap out de 0
		printf("O código não pode ser 0\n");
		printf("Pressione qualquer tecla para continuar ");
		getch();
		system("cls");
		return;
	}
	for(i=0;i<N;i++){
		if(memoriaPrincipal[i]==numeroProcesso){

			
			for(j=0;j<N;j++){
				if(memoriaSecundaria[j]==0){
					// se encontrar o código ele realizará o processo e sairá do (for)
					memoriaSecundaria[j]=numeroProcesso;
					printf("\nSwap-Out realizado com sucesso!\n");
					memoriaPrincipal[i]=0;
					Sleep(700);
					return;
				}else if(j==N-1){
					// se não houver mais espaço na memória secundária
					printf("\nNão há espaço na memória secundária, libere espaço!\n");
					printf("Pressione qualquer tecla para continuar ");
					getch();
					system("cls");
					return;
				}
			}
			break;
		}
	}
	// se não encontrar o processo irá mostrar o erro
	printf("\nError 404: Processo não encontrado na memória principal!\n");
	printf("Pressione qualquer tecla para continuar ");
	getch();
	system("cls");
	return;
}
void swapIn(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	//mover da memória secundária para a principal
	printf("\n");
	listarMemoriaSecundaria(memoriaSecundaria);
	printf("Digite o código do processo para realizar o Swap-In: ");
	int numeroProcesso, i=0, j=0;
	scanf("%d", &numeroProcesso);
	fflush(stdin);
	if(numeroProcesso==0){
		// não há swap in de 0
		printf("O código não pode ser 0\n");
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
					// se não houver mais espaço na memória primária
					printf("\nNão há espaço na memória principal, libere espaço!\n");
					printf("Pressione qualquer tecla para continuar ");
					getch();
					system("cls");
					return;
				}
			}
			break;
		}
	}
	printf("\nError 404: Processo não encontrado na memória secundária!\n");
	printf("Pressione qualquer tecla para continuar ");
	getch();
	system("cls");
	return;
}
void listarMemoriaPrincipal(int memoriaPrincipal[N]){
	// listar memória principal
	printf("\n");
	int i=0;
	system("cls");
	printf("Lista Memória Principal: \n");
	for(i=0;i<N;i++){
		printf("Posição[%d]: %d \n", i, memoriaPrincipal[i]);
	}
	printf("\n");
}
void listarMemoriaSecundaria(int memoriaSecundaria[N]){
	//listar memória secundária
	printf("\n");
	int i=0;
	system("cls");
	printf("Lista Memória Secundária: \n");
	for(i=0;i<N;i++){
		printf("Posição[%d]: %d \n", i, memoriaSecundaria[i]);
	}
	printf("\n");
}
void gerenciadorDeTarefas(int memoriaPrincipal[N], int memoriaSecundaria[N]){
	// menu para remover ou finalizar processos
	system("cls");
	printf("\n1 - Finalizar Processo da Memória Principal\n");
	printf("2 - Remover Processo da Memória Secundária\n");
	printf("3 - Voltar\n");
	int selecao, processo;
	printf("\nEscolha uma opção: ");
	scanf("%d", &selecao);
	if(selecao==1){
		listarMemoriaPrincipal(memoriaPrincipal);
		printf("\nDigite o código do processo a ser finalizado: ");
		scanf("%d", &processo);
		encerrarProcesso(processo, memoriaPrincipal);
	}else if(selecao==2){
		listarMemoriaSecundaria(memoriaSecundaria);
		printf("\nDigite o código do processo a ser removido: ");
		scanf("%d", &processo);
		removerProcesso(processo, memoriaSecundaria);
	}else if(selecao==3){
		return;
	}else{
		printf("Opção inválida!");
		return;
	}
}
void encerrarProcesso(int processo, int memoriaPrincipal[N]){
	// função para encerrar processo principal
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
	// função para finalizar processo secundário
	int i=0;
	for(i=0;i<N;i++){
		if(processo==memoriaSecundaria[i]){
			printf("Processo %d removido!\n", memoriaSecundaria[i]);
			memoriaSecundaria[i]=0;
		}
	}
	return;
}
