#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho Variavel Numero: " << sizeof(Numero) << "Bytes\n";
	std::cout << "\n Tamanho Variavel Salario: " << sizeof(Salario) << "Bytes\n";
	std::cout << "\n Endere�o de mem�ria da Vari�vel Numero: " << &Numero << "\n";
	std::cout << "\n Endere�o de mem�ria da Vari�vel Sal�rio: " << &Salario << "\n";

	system("PAUSE");
	return 0;
}