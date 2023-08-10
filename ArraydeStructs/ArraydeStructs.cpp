#include <iostream>
#include <string>
#include <tchar.h>

struct Livro
{
	int ID={ 0 };
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};

int main()
{
	/*Colocaboração Do Aluno Marcos Ranes de Oliveira no tópico
	https://www.udemy.com/course/cmaismaisbasico/learn/#questions/9368459
	*/
	system("chcp 1252 > nul");
	_tsetlocale(LC_ALL, _T("Portuguese"));
	//veja explicação de system("chcp 1252 > nul");  em https://www.udemy.com/course/cmaismaisbasico/learn/#questions/9360733


	struct Livro livro[5];
    int ContID{ 1 }; // inseri esta variavel para contar o ID do livro
	std::cout << "***Cadastro de Livros***" << "\n";
	for (int i = 0; i < 5; i++)
	{
		livro[i].ID=i+1; // inseri esta linha afim do ID ser incrementado automaticamente
		std::cout << "ID do Livro " << i+1 << ": "<< livro[i].ID; // modifiquei aqui ID automatico		
		std::cout << "\nDigite o Titulo do Livro " << i+1 << ": ";
		std::cin.ignore(); // Limpa o Buffer do teclado para não pular ou coomer letras em getline
		std::getline(std::cin, livro[i].Titulo);

		std::cout << "Digite o Autor do Livro " << i+1 << ": ";
		std::getline(std::cin, livro[i].Autor);

		std::cout << "Digite A Editora do Livro " << i+1 << ": ";
		std::getline(std::cin, livro[i].Editora);
		system("CLS");
		ContID++; // Incrementa a variavel modificando o ID do proximo livro a cadastrar 

	}

	std::cout << "*******DADOS DOS LIVROS*******\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "ID: " << livro[i].ID << "\n";
		std::cout << "Titulo: " << livro[i].Titulo << "\n";
		std::cout << "Autor: " << livro[i].Autor << "\n";
		std::cout << "Editora: " << livro[i].Editora << "\n";
		std::cout << "---------------------------------------\n";
	}

	std::cout << "**********************************\n";
	system("PAUSE");
	return 0;
}