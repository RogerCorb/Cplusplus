#include <iostream>

double Soma(char Operacao, double Num1, double Num2);

int main()
{
	double Num1, Num2;
	char Operacao;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Num2;
	std::cout << "\n + Soma \n - Subtracao \n * Multiplicacao \n / Divisao: ";
	std::cout << "\n\n Digite o simbolo da operacao desejada: ";
	std::cin >> Operacao;
	std::cout << "\nO resultado da operacao: " << Soma(Operacao, Num1, Num2);
	return 0;
}

// Aqui o case vai selecionar a operação e fará o digitado e selecionado pelo usuário
double Soma(char Operacao, double Num1, double Num2)
{
	switch (Operacao)
	{
	case '+': return Num1 + Num2;
	case '-': return Num1 - Num2;
	case '*': return Num1 * Num2;
	case '/': return Num1 / Num2;
	default: std::cout << "Operador Invalido";
		break;
	}
	return 0;
}