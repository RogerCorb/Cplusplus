#include <iostream>

int main() 
{
	int Num1{ 10 }, Num2{ 20 }, Resultado;
	//Num1 = Num2++;
	Resultado = Num1 % Num2;
	std::cout << Resultado;
	system("PAUSE");
}