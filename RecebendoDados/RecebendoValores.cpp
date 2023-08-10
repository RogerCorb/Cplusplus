#include<iostream>

int main()
{

	int Numero01, Numero02, Num1 ,Num2, Num3, Num4; 
	std::cout << " Digite o Primeiro Numero .: "; std::cin >> Numero01;
	std::cout << " Numero 01= " << Numero01 << std::endl;
	std::cout << " Digite o Segundo Numero  .: "; std::cin >> Numero02;
	std::cout << " Numero 02= " << Numero02 << std::endl;

	std::cout << " Digite quatro numeros separados por espaço .: ";std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "\nSoma = " << (Numero01+Numero02+ Num1+Num2+Num3+Num4)<< "\n";
	system("PAUSE");
	return 0;

}
