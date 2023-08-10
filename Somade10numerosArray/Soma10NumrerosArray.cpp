#include<iostream>
#include<string>

int main()
{
	int Numeros[10];
	int Soma{ 0 };

	for (int i=0; i<10; i++)
	{
		std::cout << "\nDigite o numero " << i+1;
		std::cin >> Numeros[i];
		Soma += Numeros[i];		
	}
	std::cout << "\nA soma de todos os numeros digitados e .: " << Soma << "\n";
	system("PAUSE");
	return 0;
}