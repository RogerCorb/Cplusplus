#include <iostream>

void TrocaNumeros(int& Num1, int& Num2); // Agora funciona a fun��o trocando numeros com o &
//comercial
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro N�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo N�mero: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;
	std::cout << "\nValores depois da troca\n";
	//Esta chamada de fun��o agora passa os valores que est�o no mesmo endere�o de memoria
	//E Coloca estes valores em Num1 e Num2 respectivamente da fun��o
	//Troca Numeros...
	//que tamb�m est�o referenciados por &Num1 &Num2,
	//logo a troca se dar� por essa refencia que foi feita
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
	std::cout << "\nNum1 Fun��o = " << &Num1;
	std::cout << "\nNum2 Fun��o = " << &Num2;

	int Temp{ Num1 };
	//Num1 passa a ser 20
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	
	Num2 = Temp;
	
}