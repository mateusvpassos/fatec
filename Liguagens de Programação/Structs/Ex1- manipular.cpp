//PROGRAMA QUE MANIPULA A STRUCT PESSOA
#include <stdio.h>
#include <string.h>
#include <locale.h>
struct Pessoa{
	char nome[40];
	int idade;
	float peso;
	float altura;
};
main(){
	setlocale(LC_ALL,"Portuguese");
	struct Pessoa p1, p2;
	printf("Leitura dado pessoa1: \n\n");
	printf("Nome: ");
	fflush(stdin);
	gets(p1.nome);
	printf("\nIdade: ");
	scanf("%d", &p1.idade);
	printf("\nPeso: ");
	scanf("%f", &p1.peso);
	printf("\nAltura: ");
	scanf("%f", &p1.altura);
	printf("\n---------------------\n");
	printf("Leitura dado pessoa2: \n\n");
	printf("Nome: ");
	fflush(stdin);//USAR ANTES DOS GETS
	gets(p2.nome);
	printf("\nIdade: ");
	scanf("%d", &p2.idade);
	printf("\nPeso: ");
	scanf("%f", &p2.peso);
	printf("\nAltura: ");
	scanf("%f", &p2.altura);
	printf("\n--------Exibição----------\n");
	printf("Nome: ");
	puts(p1.nome);
	printf("\nIdade: %d", p1.idade);
	printf("\nPeso: %5.2f", p1.peso);
	printf("\nAltura: %5.2f", p1.altura);
	printf("\n--------------------\n");
	printf("Nome: ");
	puts(p1.nome);
	printf("\nIdade: %d", p2.idade);
	printf("\nPeso: %5.2f", p2.peso);
	printf("\nAltura: %5.2f", p2.altura);
}
