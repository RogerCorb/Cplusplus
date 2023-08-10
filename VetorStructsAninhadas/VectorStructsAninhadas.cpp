#include <iostream>
#include <cstring>
#include <vector>
#include <Windows.h>

struct Data
{
	int Dia,Mes,Ano;
};

struct Endereco
{
	std::string Rua,Cidade,Estado,Pais;
};

struct Pessoa
{
	std::string Nome;
	//Aqui foi declarada uma variável do tipo Data
	Data DtNascimento;
	//Aqui foi declarada uma variável do tipo Endereco
	Endereco Endereco;
};



int main()
{
	Pessoa Pessoa01[2]; // Agroa o Objeto Pessoa01 é um vector de struct 
	//com 2 elemntos e para popular usarmos o for
	

	for (int i = 0; i < 2; i++)
	{
		Pessoa01[i].Nome = "Udemy";
		Pessoa01[i].DtNascimento.Dia = 01+i;
		Pessoa01[i].DtNascimento.Mes = 02+i;
		Pessoa01[i].DtNascimento.Ano = 2009+i;
		Pessoa01[i].Endereco.Rua = " Rua A ";
		Pessoa01[i].Endereco.Cidade = " Sao Francisco ";
		Pessoa01[i].Endereco.Estado = " California ";
		Pessoa01[i].Endereco.Pais = "EUA ";

		std::cout << "Nome: " << Pessoa01[i].Nome << "\n";
		//Para colocar uma barra invertida lembre de duplicar \\ pois se você colocar apenas uma barra o compilador vai entender que você deseja colocar um caractere de escape tipo \t e \n e vai indicar erro...
		std::cout << "Data Nascimento: " << Pessoa01[i].DtNascimento.Dia << "\\" << Pessoa01[i].DtNascimento.Mes << "\\" << Pessoa01[i].DtNascimento.Ano << "\n";
		std::cout << "Endereco: " << Pessoa01[i].Endereco.Rua << Pessoa01[i].Endereco.Cidade << Pessoa01[i].Endereco.Estado << Pessoa01[i].Endereco.Pais << "\n";

	}
	
	system("PAUSE");
	return 0;
}