#include <iostream>
#include <string>
#include<valarray>




int main()
{
	int VArray[10]{};
	int Soma{ 0 }, Max{ 0 }, Min{ 0 };
	for (int i = 0; i < 10; i++) 
	{
		std::cout <<"Digite o numero   " << i+1 << ".:";
		std::cin >> VArray[i];
		system("cls");
	}

	int* ptr{ VArray };

	std::valarray<int>::valarray(*ptr, 10);
/*  int 
for (int i = 0; i < 10; i++)
	{
		if (VArray[i] > Max )
			Max = VArray[i];
		else if (VArray[i] < Min)
			Min = VArray[i];

	}
*/
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "\nNumero  " << i + 1 << " digitado.:  " << VArray[i];
	}
	std::cout << "\nMaior Numero Digitado .: " << Max;
	std::cout << "\nMenor Numero Digitado .: " << Min << "\n";
	//std::valarray::valarray(
	//std::cout << first.min();
	std::cout << Min;
	system("PAUSE");
	return 0;
}