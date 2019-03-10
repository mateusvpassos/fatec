/* STRUCTS(REGISTROS)

UMA STRUCT É UM CONJUNTO DE CAMPOS QUE PODEM OU NAO SEREM DO MESMO TIPO

DECLARAÇAO DE STRUCTS

struct <nome> {
	<tipo_dado> <campo1>;
	........
	<tipo_dado> <campoN>;
};

Ex: 
struct Pessoa{
	char nome[40];
	int idade;
	float peso;
	flost altura;
};

struct Carro{
	char marca[40];
	char modelo[60];
	float valor;
	char placa[8];
};

A DECLARAÇÃO DE STRUCT DEVEM SER REALIZADAS LOGO APOS A INCLUSAO DAS BIBLIOTECAS

A DECLARAÇAO DE UMA STRUCT É COMO DEFINIRMOS UM NOVO TIPO DE DADO COMPOSTO (NAS PROXIMAS AULAS VEREMOS COMO SE FAZ A DEFINIÇAO DE UM TIPO)
A DECLARAÇÃO DEFINE A STRUCT, NAO A VARIAVEL QUE IRA ARMAZENAR OS VALORES.
DECLARAÇÃO DE VARIAVEIS:
structs

Ex: struct Pessoa p1,p2;
struct Carro car1, car2;

A leitura dos dados dos campos obedecem as mesmas formas de entradas de dados ja estudadas.

COMO ACESSAR UM CAMPO DE UMA STRUCT.
<variavel_struct>.<nome do campo>


ex: p1.nome;
	p1.altura;
	.
	.
	.
	.
	.
