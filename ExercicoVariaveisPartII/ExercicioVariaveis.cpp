#include <iostream>
#include <iomanip> // para usar o setprecision() que faz com que a variável Double 
                   // exiba todos os números que ela contém antes e depois da vírgula


int main()
{
	
	system("COLOR 0A");// Colocando a cor de fundo preto e as letras em verde claro 
	
	int Num = 5; // Declarando as variáveis e já atribuindo valores a elas
	float NumF = 55.56f;
	double NumD = 44415.98555;
	char Caractere = 'A';

	std::cout << "Valor da variavel Inteiro: " << Num << "\n";
	std::cout << "Tamanho da Variavel: " << sizeof(Num) << "\n";
	std::cout << "Endereco de memoria: " << &Num << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";

	std::cout << "Valor da Variavel Float: " <<  NumF << "\n";
	std::cout << "Tamanho da Variavel: " << sizeof(NumF) << "\n";
	std::cout << "Endereco de memoria: " << &NumF << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";

	std::cout << "Valor da Variavel Double: " << std::setprecision(12) << NumD << "\n";
	std::cout << "Tamanho da Variavel: " << sizeof(NumD) << "\n";
	std::cout << "Endereco de memoria: " <<  &NumD << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";

	std::cout << "Valor da Variavel CHAR: " << Caractere << "\n";
	std::cout << "Tamanho da Variavel: " << sizeof(Caractere) << "\n";
	std::cout << "Endereco de memoria: " << (void*)&Caractere << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";
		

	system("PAUSE");
	return 0;

}