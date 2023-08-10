/*Este Código foi modificado ao que pertencia ao aluno Paulo Roberto da Silva após uma pergunta dele sobre este tema de cadastrar livros com quantidade informada pelo usuário. A pergunta que ele fez está
disponível em: https://www.udemy.com/instructor/communication/qa/19067914/detail/?course=1692520*/

#include<iostream>
#include<string>  // Biblioteca para trabalharmos com a função string 
#include<Windows.h>
#include <vector> // Biblioteca para pegar as funções referente a vetores push_back() por ecemplo

using namespace std;
//Uma struct de nome Livro capaz de armazenar ID, Titulo e Autor 
struct Livro
{
	int ID;
	string Titulo;
	string Autor;
};

int main()
{

	setlocale(LC_ALL, "portuguese");

	//Aqui será criado na memória quando da execução do programa 
	//um vetor que vai armazenar em cada índice uma struct Livro
	vector<Livro> livros;

	int quantidade;
	cout << "Informe o número de livros para o cadastro: ";
	cin >> quantidade;

	for (int i = 0; i < quantidade; i++) {

		Livro Cadastro;  //Necessario criar um objeto struct que será usado para armazenar cada uma das informações de cada livro.
		//a cada passada do for este objeto conterá as informacoes digitadas pelo usuario
		//e depois este objeto sera adicionado como novo elemento do vector livros
		Cadastro.ID = i + 1;
		cout << "\n***Cadastro de Livros***" << "\n";
		cout << "ID do Livro: " << i + 1 << " : " << Cadastro.ID;
		
		cin.ignore();
		cout << "\nDigite Titulo do Livro: " << i + 1 << " : ";
		getline(cin, Cadastro.Titulo);
		cout << "\nDigite Autor do Livro: " << i + 1 << " : ";
		getline(cin, Cadastro.Autor);

		//aqui a struct Cadastro que foi cadastrada com as informações será
		//colocada sempre no final do vetor. Isso criará um novo elemento a cada passada do for
		//até sair do loop

		livros.push_back(Cadastro); // Importante função push_back

		system("CLS");

	}
	//cout << livros.capacity();

	cout << "**********DADOS DOS LIVROS*********\n";

	for (int i = 0; i < livros.size(); i++) {
		// é um vector de struct Livro, logo cada indice deste vetor contem uma struct livro
		//logo para colocar as informações de cada struct na tela usaremos o indice [i]
		cout << "ID: " << livros[i].ID << "\n";
		cout << "Titulo: " << livros[i].Titulo << "\n";
		cout << "Autor: " << livros[i].Autor << "\n";

		cout << "________________________________________\n";
		cout << "****************************************\n";

	}

	system("PAUSE");

	return 0;

}