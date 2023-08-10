#include <iostream>

int main()
{
	
	int num1, num2, num3;
	int resultado;
	
	system("COLOR 0A");
	std::cout << "vou aprender "<< "\n"; 
	std::cout << "programar em c++ "<< "\n";
	std::cout << "Digite o numero 01 " << "\n";
	std::cin >> num1;
	std::cout << "Digite o numero 02 " << "\n";
	std::cin >> num2;
	std::cout << "Digite o numero 03 " << "\n";
	std::cin >> num3;
	resultado = (num1 + num2 + num3) / 3;
	std::cout << "A media aritimetica dos numeros digitados e .." << "\n";
	std::cout << resultado << "\n";
	
	system("PAUSE");
	return 0;


}