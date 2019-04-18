using System;
using System.Collections;
public class Class1
{
	public MemoriaSwap(){

        void Main(string[] args)
        {

            ArrayList<int> memoriaPrimaria = new ArrayList();
            ArrayList<int> memoriaSecundaria = new ArrayList();

            while (true)
            {

                menu(memoriaPrimaria, memoriaSecundaria);

            }
        }
        void menu(ArrayList < Integer > memoriaPrimaria, ArrayList < Integer > memoriaSecundaria)
        {
            Console.WriteLine("1 - Limpar Memória Principal");
            Console.WriteLine("2 - Limpar Memória Secundária");
            Console.WriteLine("3 - Alocar processo na Memória Principal");
            Console.WriteLine("4 - Swap Out");
            Console.WriteLine("5 - Swap In");
            Console.WriteLine("6 - Listar Memória Principal");
            Console.WriteLine("7 - Listar Memória Secundária");
            Console.WriteLine("8 - Gerenciador de Tarefas");
            Console.WriteLine("9 - Sair");
            
            Console.WriteLine("Digite uma opção: ");

            String selecao = Console.ReadLine();

            if (selecao == 1)
            {
                limparMemoriaPrincipal(memoriaPrimaria);
            }
            else if (selecao == 2)
            {
                limparMemoriaSecundaria(memoriaSecundaria);
            }
            else if (selecao == 3)
            {
                alocarProcessoMemoriaPrincipal(memoriaPrimaria);
            }
            else if (selecao == 4)
            {
                swapOut(memoriaPrimaria, memoriaSecundaria);
            }
            else if (selecao == 5)
            {
                swapIn(memoriaPrimaria, memoriaSecundaria);
            }
            else if (selecao == 6)
            {
                listarMemoriaPrincipal(memoriaPrimaria);
            }
            else if (selecao == 7)
            {
                listarMemoriaSecundaria(memoriaSecundaria);
            }
            else if (selecao == 8)
            {
                gerenciadorDeTarefas(memoriaPrimaria, memoriaSecundaria);
            }
            else if (selecao == 9)
            {
                System.exit(0);////
            }
            else
            {
                void Clear();
                Console.WriteLine("\nOpção Inválida\n");
                return;
            }
        }
        void swapIn(ArrayList<Integer> memoriaPrimaria, ArrayList<Integer> memoriaSecundaria)
        {
            Console.WriteLine("Digite o código do processo para o Swap In: ");
            String codProcesso = Console.ReadLine();

            if (codProcesso == 0)
            {
                void Clear();
                Console.WriteLine("Código não pode ser 0!");
                return;
            }
            else if (memoriaPrimaria.contains(codProcesso))
            {
                memoriaPrimaria.Add(codProcesso);
                memoriaSecundaria.Remove(codProcesso);
                void Clear();
                Console.WriteLine("Swap In realizado!");
                return;
            }
            else
            {
                void Clear();
                Console.WriteLine("Processo não está na memória secundária!");
            }

        }

        void gerenciadorDeTarefas(ArrayList<Integer> memoriaPrimaria, ArrayList<Integer> memoriaSecundaria)
        {
            void Clear();
            Console.WriteLine("1 - Finalizar Processo da Memória Principal");
            Console.WriteLine("2 - Remover Processo da Memória Secundária\n");
            Console.WriteLine("3 - Voltar\n");
            Console.WriteLine("Escolha uma opção: ");

            String selecao1 = Console.ReadLine();

            if (selecao1 == 1)
            {
                listarMemoriaPrincipal(memoriaPrimaria);
                Console.WriteLine("\nDigite o código do processo a ser finalizado: ");

                String codProcesso = Console.ReadLine();

                memoriaPrimaria.Remove(codProcesso);
                void Clear();
                Console.WriteLine(codProcesso + " - Processo encerrado!");
            }
            else if (selecao1 == 2)
            {
                listarMemoriaSecundaria(memoriaSecundaria);
                Console.WriteLine("\nDigite o código do processo a ser removido: ");

                String codProcesso1 = Console.ReadLine();
                
                memoriaSecundaria.remove(codProcesso1);
                void Clear();
                Console.WriteLine(codProcesso1 + " - Processo removido!");
            }
            else if (selecao1 == 3)
            {
                void Clear();
                return;
            }
            else
            {
                void Clear();
                Console.WriteLine("Opção inválida!");
                return;
            }

        }

        void listarMemoriaSecundaria(ArrayList<Integer> memoriaSecundaria)
        {
            void Clear();
            Console.WriteLine("Lista Memoria Secundária: \n" + memoriaSecundaria.ToString());
        }

        void listarMemoriaPrincipal(ArrayList<Integer> memoriaPrimaria)
        {
            void Clear();
            Console.WriteLine("Lista Memoria Principal: \n" + memoriaPrimaria.ToString());
        }

        void swapOut(ArrayList<Integer> memoriaPrimaria, ArrayList<Integer> memoriaSecundaria)
        {

            String codProcesso = Console.ReadLine();

            if (codProcesso == 0)
            {
                void Clear();
                Console.WriteLine("Código não pode ser 0!");
                return;
            }
            else if (memoriaPrimaria.Contains(codProcesso))
            {
                memoriaSecundaria.Add(codProcesso);
                memoriaPrimaria.Remove(codProcesso);
                void Clear();
                Console.WriteLine(codProcesso + " - Swap Out realizado!");
                return;
            }
            else
            {
                void Clear();
                Console.WriteLine(codProcesso + " - Processo não está na memória principal!");
            }

        }

        void alocarProcessoMemoriaPrincipal(ArrayList<Integer> memoriaPrimaria)
        {

            String codProcesso = Console.WriteLine();
           
            if (codProcesso == 0)
            {
                void Clear();
                Console.WriteLine("Código não pode ser 0!");
                return;
            }
            else if (memoriaPrimaria.Contains(codProcesso))
            {
                void Clear();
                Console.WriteLine(codProcesso + " - Processo já está em execução!");
                return;
            }
            else
            {
                memoriaPrimaria.Add(codProcesso);
                void Clear();
                Console.WriteLine(codProcesso + " - Processo alocado!");
                return;
            }

        }

        void limparMemoriaSecundaria(ArrayList<Integer> memoriaSecundaria)
        {
            void Clear();
            memoriaSecundaria.Clear();
            Console.WriteLine("Memória Secundária Limpa!");


        }

        void limparMemoriaPrincipal(ArrayList<Integer> memoriaPrimaria)
        {
            void Clear();
            memoriaPrimaria.Clear();
            Console.WriteLine("Memória Primária Limpa!");

        }
    }
}
