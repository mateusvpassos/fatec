/**
1-O QUE SAO FUNCOES?
	uma funcao é um conjunto de comandos que tem como objetivo realizar uma tarefa, podendo ser chamada várias vezes, através de seu nome.
2-QUAL A DIFERENÇA ENTRE FUNCAO E PROCEDIMENTO? EM C COMO E ESSA DIFERENCA?
	uma funcao necessita retornar um resultado(return), o procedimento não precisa, procedimento normalmente é usado para se evitar
	repetição de código.
	Em C:
	int funcao(int x){
		return x+1;
	}
	void procedimento(){
		printf();
		scanf();
	}
3-QUAIS OS TIPOS DE PASSAGEM DE PARAMETROS?
	por valor, é copiando o valor para a variavel e manipulando ela, por referencia, utiliza-se o valor que está atribuido na memória.
4-O QUE SAO STRUCTS
	structs sao como uma estrutura que pode ter dentro dela varias variaveis, uma variável composta, variavel com variaveis dentro, deixando mais especifico:
	por exemplo Funcionario, que possui nome, idade, cpf, salario,etc.
5-COMO DECLARAMOS UMA STRUCT EM C
	struct Pessoa{
		char nome[40];
		int idade;
		float peso;
		float altura;
	};
6-QUAL AS VANTAGENS DO USO DAS STRUCTS?
	a vantagem de se utilizar structs é que se organiza melhor quando se tem que guardar grandes quantidades de informações
	posso ter N structs com N variáveis dentro. Facilita a leitura de código;
7-O QUE SAO FUNCOES RECURSIVAS?
	funcoes recursivas sao funcoes que chamam a si mesmas, com o intuito de cumprir seu objetivo, utiliza a si mesma para se concluir.
8-QUAIS PARTES QUE TODA FUNCAO RECURSIVA PRECISA TER?
	precisa de um caso base, para que possa sair dela mesma quando concluir, e da chamada a si mesma, para poder ser chamada de recursiva.
9-ESCREVA UMA FUNCAO RECURSIVA QUE DEVOLVA A QUANTIDADE DE VOGAIS DE UMA STRING
	int contaCaracterString(char string[]){
	if(string[0]=='\0'){
		return 0;
	} else{
		return contaCaracterString(&string[1])+1;
	}
}
10-ESCREVER UMA FUNCAO RECURSIVA QUE EXIBA OS ELEMENTOS DE UM VETOR DE 10 POSICOES EM ORDEM INVERSA
	void inverteString(char string[]){
	if(string[0]=='\0'){
		return;
	}else{
		inverteString(&string[1]);
		printf("%c", string[0]);
	}
}
11-ESCREVER UMA FUNCAO RECURSIVA QUE CONVERTA UMA STRING EM MAIUSCULO
	void converteMaiusculo(char string[]){
	if(string[0]=='\0'){
		return;
	}else{
		string[0]=toupper(string[0]);
		printf("%c", string[0]);
		converteMaiusculo(&string[1]);
	}
}
12-ESCREVER UMA FUNCAO RECURSIVA QUE CONVERTA UMA STRING EM MINUSCULO
	void converteMinusculo(char string[]){
	if(string[0]=='\0'){
		return;
	}else{
		string[0]=tolower(string[0]);
		printf("%c", string[0]);
		converteMinusculo(&string[1]);
	}
}
13-COMO FAZEMOS PARA ACESSAR UM CAMPO DE UMA STRUCT
	para acessar precisamos criar uma struct daquele tipo;
	ex: struct Pessoa p1;
	e para acessar p1.nome;
	Pessoa - p1, no campo nome.
14-COMO DECLARAMOS UM NOVO TIPO DE DADO USANDO UMA STRUCT
	struct NomeStruct{
		String x;
		int y;
		float z;
	}typedef NovoTipo;
*/

