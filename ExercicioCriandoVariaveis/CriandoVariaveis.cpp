#include <iostream>
#include <iomanip>

int main() 
{
	system("COLOR 0A");
	int NumComputadores =100 ;
	int SerialComputador = 11111;
	float Num2 = 55.56f;
	double Num3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';

	// Num2 = 55.56f;
	// Num3 = 45345.904555;
	// NumComputadores = 100;
	// SerialComputador = 11111;

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "\n";
	std::cout << "Valor de NumComputadores = " << NumComputadores << "\n";
	std::cout << "Valor de SerialComputadores = " << SerialComputador << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "\n";
	
	std::cout << "Valor de Numero 3 :" << std::setprecision(12) << Num3 << "\n";
	std::cout << "Tamanho da variavel Numero 3 :" << sizeof(Num3) << "\n";
	std::cout << "Endereço de memoria da variavel Numero 3 :" << &Num3 << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "\n";

	std::cout << "Valor Caractere :" << Caractere << "\n";
	std::cout << "Tamanho da variavel Caractere :" << sizeof(Caractere) << "\n";
	std::cout << "Endereço de memoria da variavel Caractere :" << (void*) &Caractere << "\n";

	std::cout << "Valor Caractere 2 :" << Caractere2 << "\n";
	std::cout << "Tamanho da variavel Caractere 2  :" << sizeof(Caractere2) << "\n";
	std::cout << "Endereço de memoria da variavel Caractere2 :" << (void*) &Caractere2 << "\n";

	system("PAUSE");
	return 0;


}