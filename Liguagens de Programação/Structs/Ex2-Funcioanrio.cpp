/*PROGRAMA QUE LEIA E EXIBA 3 REGISTROS DE
a) FUNCIONARIO
	NOME: STRIN 40
	CARGO STRING 20
	Salario
	
	APOS A LEITURA DOS DADOS DAR UM AUMENTOS DE 10% PARA QUEM GANHA ATE 1500 REIAS 7% PARA QUEM GANHA ATE 3000 REAIS 5% PARA QUEM ATE 600 REAIS E 15% PARA QUEM GANHA ACIMA
	DE 600 REAIS.
	
*/  
#include <locale.h>
#include <stdio.h>
#include <string.h>
struct Funcionario{
	char nome[40];
	char cargo[20];
	float salario;
};
float aumentoDoSalario(float s[3]){
	
	return;
}
main(){
	setlocale(LC_ALL,"Portuguese");
	struct Funcionario[3];
	for(int i=0;i<3;i++){
		printf("Leitura dos dados: \n\n");
		printf("Nome: ");
		fflush(stdin);
		gets(f1.nome);
		printf("\nCargo: ");
		gets(f1.cargo);
		printf("\nSalario: ");
		scanf("%f", &f1.salario);
	}
}
