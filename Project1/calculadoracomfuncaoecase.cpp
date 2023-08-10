#include <iostream>

/*; 
Conforme explicado N�O h� necessidade de informar as vari�veis ao
declarar o PROT�TIPO da fun��o, ha necessidade de declarar os TIPOS
destas vari�veis no caso char,double,double; veja que a fun��o 
tanto declarada acima como declarada agora abaixo funcionam perfeitamente !
double Soma(char Operacao, double Num1, double Num2);
*/
double Soma(char,double,double);

int main()
{
	double Numero1, Numero2;
	char Opcao;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero2;
	std::cout << "\n + Soma \n - Subtracao \n * Multiplicacao \n / Divisao: ";
	std::cout << "\n\n Digite o simbolo da operacao desejada: ";
	std::cin >> Opcao;
	std::cout << "\nO resultado da operacao: " << Soma(Opcao, Numero1, Numero2);
	return 0;
}

// Aqui o case vai selecionar a opera��o e far� o digitado e selecionado pelo usu�rio
double Soma(char Operacao, double Num1, double Num2) // AQUI fazendo a fun��o � obrigatorio declarar as variaveis

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