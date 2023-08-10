#include <iostream>

void TrocaNumeros(int& Num1, int& Num2); // Agora funciona a função trocando numeros com o &
//comercial
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;
	std::cout << "\nValores depois da troca\n";
	//Esta chamada de função agora passa os valores que estão no mesmo endereço de memoria
	//E Coloca estes valores em Num1 e Num2 respectivamente da função
	//Troca Numeros...
	//que também estão referenciados por &Num1 &Num2,
	//logo a troca se dará por essa refencia que foi feita
	TrocaNumeros(Numero1, Numero2);
	
	std::cout << "\nNum1 = " << &Numero1;
	std::cout << "\nNum2 = " << &Numero2;

	std::cout << "\nNum1 = " << Numero1;
	std::cout << "\nNum2 = " << Numero2 << "\n";

	system("PAUSE");
	return 0;
}


void TrocaNumeros(int &Num1, int &Num2)
{
	std::cout << "\nNum1 Função = " << &Num1;
	std::cout << "\nNum2 Função = " << &Num2;

	int Temp{ Num1 };
	//Num1 passa a ser 20
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	
	Num2 = Temp;
	
}