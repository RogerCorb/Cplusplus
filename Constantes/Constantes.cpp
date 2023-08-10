#include <iostream>
#include <string>


int main()
{
	system("COLOR 0A");
	int Numero01;
	const int NUM_VIDAS = 10;
	int TotaldeVidas = NUM_VIDAS - 1;
	std::cout << " Total de Vidas ; " << TotaldeVidas << "\n";
	std::cout << " Valor da Constante NUM_VIDAS; " << NUM_VIDAS << "\n";
	std::cout << " Endereço de memoria  NUM_VIDAS:  " << &NUM_VIDAS << "\n";
	std::cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";
	std::cout << std::string(20, ' ') << " Digite o numero 1:";
	std::cin >> Numero01;
	std::cout << std::string(20, ' ') << "Numero digitado = " << Numero01 << "\n";
	
	system("PAUSE");
	return 0;

}