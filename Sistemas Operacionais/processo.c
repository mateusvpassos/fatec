#include <unistd.h> // BIBLIOTECA MANIPULA ARQUIVOS E DIRETORIOS
#include <stdio.h> // IMPORTA BIBLIOTECA DE ENTRADA E SAIDA DE C
 
void main(){ // METODO MAIN COMEÇO
	
	int i; // DECLARAÇÃO VARIAVEL I COMO INTEIRO
	if(fork()==0){ // CRIA UM PROCESSO FILHO INDENTICO AO PAI MAS O SEU PID E 0
		for(i=0;i<5;i++){ // LAÇO DE REPETIÇÃO DE I=0 ENQUANTO MENOR QUE 5
			printf("Filho: %d\n", i); //EXIBE A MENSAGEM FILHO E O NUMERO ITERADO	
			sleep(2); // PAUSA POR 2 SEGUNDOS		
		}	
	}else{
		for(i=0;i<5;i++){ // LAÇO DE REPETIÇÃO DE I=0 ENQUANTO MENOR QUE 5
			printf("Pai: %d\n", i); // EXIBE A MENSAGEM PAI E O NUMERO ITERADO
			sleep(3); // PAUSA POR 3 SEGUNDOS
		}
	}				
}