
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class MemorySwap {
	public static void main(String[] args) {
		
		ArrayList<Integer> memoriaPrimaria = new ArrayList<Integer>();
		ArrayList<Integer> memoriaSecundaria = new ArrayList<Integer>();
		
		while(true) {
			
			menu(memoriaPrimaria, memoriaSecundaria);
			
		}
		
	}

	static void menu(ArrayList<Integer> memoriaPrimaria, ArrayList<Integer> memoriaSecundaria) {
		
		System.out.println("1 - Limpar Memória Principal");
		System.out.println("2 - Limpar Memória Secundária");
		System.out.println("3 - Alocar processo na Memória Principal");
		System.out.println("4 - Swap Out");
		System.out.println("5 - Swap In");
		System.out.println("6 - Listar Memória Principal");
		System.out.println("7 - Listar Memória Secundária");
		System.out.println("8 - Gerenciador de Tarefas");
		System.out.println("9 - Sair");
		String opcao = null;
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Digite uma opção: ");
		try {
			opcao = in.readLine();
		} catch (IOException e) {
			e.printStackTrace();
		}
		
		Integer selecao = Integer.parseInt(opcao);
		
		if(selecao==1){
			limparMemoriaPrincipal(memoriaPrimaria);
		}else if(selecao==2){
			limparMemoriaSecundaria(memoriaSecundaria);
		}else if(selecao==3){
			alocarProcessoMemoriaPrincipal(memoriaPrimaria);
		}else if(selecao==4){
			swapOut(memoriaPrimaria, memoriaSecundaria);
		}else if(selecao==5){
			swapIn(memoriaPrimaria, memoriaSecundaria);
		}else if(selecao==6){
			listarMemoriaPrincipal(memoriaPrimaria);
		}else if(selecao==7){
			listarMemoriaSecundaria(memoriaSecundaria);
		}else if(selecao==8){
			gerenciadorDeTarefas(memoriaPrimaria, memoriaSecundaria);
		}else if(selecao==9){
			System.exit(0);
		}else{
			for (int i = 0; i < 100; ++i)  {
			       System.out.println();
			}
			System.err.println("\nOpção Inválida\n");
			return;
		}
	}

	private static void swapIn(ArrayList<Integer> memoriaPrimaria, ArrayList<Integer> memoriaSecundaria) {
		
		String codigo = null;
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Digite o código do processo para o Swap In: ");
		try {
			codigo = in.readLine();
		} catch (IOException e) {
			e.printStackTrace();
		}
		Integer codProcesso = Integer.parseInt(codigo);
		
		if(codProcesso==0) {
			for (int i = 0; i < 100; ++i)  {
			       System.out.println();
			}
			System.err.println("Código não pode ser 0!");
			return;
		}else if(memoriaPrimaria.contains(codProcesso)) {
			memoriaPrimaria.add(codProcesso);
			memoriaSecundaria.remove(codProcesso);
			for (int i = 0; i < 100; ++i)  {
			       System.out.println();
			}
			System.out.println("Swap In realizado!");
			return;
		}else {
			for (int i = 0; i < 100; ++i)  {
			       System.out.println();
			}
			System.err.println("Processo não está na memória secundária!");
		}
		
	}

	private static void gerenciadorDeTarefas(ArrayList<Integer> memoriaPrimaria, ArrayList<Integer> memoriaSecundaria) {
		for (int i = 0; i < 100; ++i)  {
		       System.out.println();
		}
		System.out.println("1 - Finalizar Processo da Memória Principal");
		System.out.println("2 - Remover Processo da Memória Secundária\n");
		System.out.println("3 - Voltar\n");
		System.out.println("Escolha uma opção: ");
		
		String opcao = null;
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		try {
			opcao = in.readLine();
		} catch (IOException e) {
			e.printStackTrace();
		}
		Integer selecao1 = Integer.parseInt(opcao);

		if(selecao1==1){
			listarMemoriaPrincipal(memoriaPrimaria);
			System.out.println("\nDigite o código do processo a ser finalizado: ");
			
			String processo1 = null;
			BufferedReader in1 = new BufferedReader(new InputStreamReader(System.in));
			try {
				processo1 = in1.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			Integer	codProcesso = Integer.parseInt(processo1);
			memoriaPrimaria.remove(codProcesso);
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.out.println(codProcesso + " - Processo encerrado!");
		}else if(selecao1==2){
			listarMemoriaSecundaria(memoriaSecundaria);
			System.out.println("\nDigite o código do processo a ser removido: ");
			
			String processo2 = null;
			BufferedReader in1 = new BufferedReader(new InputStreamReader(System.in));
			try {
				processo2 = in1.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			Integer	codProcesso1 = Integer.parseInt(processo2);
			memoriaSecundaria.remove(codProcesso1);
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.out.println(codProcesso1 + " - Processo removido!");
		}else if(selecao1==3){
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			return;
		}else{
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.out.println("Opção inválida!");
			return;
		}
		
	}

	private static void listarMemoriaSecundaria(ArrayList<Integer> memoriaSecundaria) {
		for (int i = 0; i < 50; ++i)  {
		       System.out.println();
		}
		System.out.println("Lista Memoria Secundária: \n" + memoriaSecundaria.toString());
	}

	private static void listarMemoriaPrincipal(ArrayList<Integer> memoriaPrimaria) {
		for (int i = 0; i < 50; ++i)  {
		       System.out.println();
		}
		System.out.println("Lista Memoria Principal: \n" + memoriaPrimaria.toString());
	}

	private static void swapOut(ArrayList<Integer> memoriaPrimaria, ArrayList<Integer> memoriaSecundaria) {

		String codigo = null;
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Digite o código do processo para o Swap Out: ");
		try {
			codigo = in.readLine();
		} catch (IOException e) {
			e.printStackTrace();
		}
		Integer codProcesso = Integer.parseInt(codigo);
		
		if(codProcesso==0) {
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.err.println("Código não pode ser 0!");
			return;
		}else if(memoriaPrimaria.contains(codProcesso)) {
			memoriaSecundaria.add(codProcesso);
			memoriaPrimaria.remove(codProcesso);
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.out.println(codProcesso + " - Swap Out realizado!");
			return;
		}else {
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.err.println(codProcesso + " - Processo não está na memória principal!");
		}
		
	}

	private static void alocarProcessoMemoriaPrincipal(ArrayList<Integer> memoriaPrimaria) {
		
		String codigo = null;
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Digite o código do processo a ser alocado: ");
		try {
			codigo = in.readLine();
		} catch (IOException e) {
			e.printStackTrace();
		}
		Integer codProcesso = Integer.parseInt(codigo);
		if(codProcesso==0) {
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.err.println("Código não pode ser 0!");
			return;
		}else if(memoriaPrimaria.contains(codProcesso)) {
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.err.println(codProcesso + " - Processo já está em execução!");
			return;
		}else{
			memoriaPrimaria.add(codProcesso);
			for (int i = 0; i < 50; ++i)  {
			       System.out.println();
			}
			System.out.println(codProcesso + " - Processo alocado!");
			return ;
		}
		
	}

	private static void limparMemoriaSecundaria(ArrayList<Integer> memoriaSecundaria) {
		for (int i = 0; i < 50; ++i)  {
		       System.out.println();
		}
		memoriaSecundaria.clear();
		System.out.println("Memória Secundária Limpa!");
		
		
	}

	private static void limparMemoriaPrincipal(ArrayList<Integer> memoriaPrimaria) {
		for (int i = 0; i < 50; ++i)  {
		       System.out.println();
		}
		memoriaPrimaria.clear();
		System.out.println("Memória Primária Limpa!");
		
	}
}