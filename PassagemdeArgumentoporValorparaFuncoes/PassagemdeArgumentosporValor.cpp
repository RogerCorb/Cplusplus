#include <iostream>

void TrocaNumeros(int Num1, int Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	std::cout << "\nDigite o primeiro N�mero: ";
	std::cin >> Num1;
	std::cout << "\nDigite o Segundo N�mero: ";
	std::cin >> Num2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\nNumero1 = " << Num1;
	std::cout << "\nNumero2 = " << Num2;
	std::cout << "\nValores depois da troca\n";
	//Esta chamada de fun��o apenas COPIA o Valor de Numero1 e Numero2
	//E Coloca estes valores em Num1 e Num2 respectivamente da fun��o
	//Troca Numeros...
	//N�o h� rela��o alguma com estas vari�veis..
	//Numero1 e Numero2 s�o vari�veis locais a fun��o main
	TrocaNumeros(Num1, Num2);
	//Mesmo sendo mesmo nome, s�o vari�veis diferente e com endere�os de mem�ria diferentes
	//A ISSO CHAMAMOS DE PASSAGEM DE PAR�METROS POR VALOR!
	//APENAS UMA COPIA DO VALOR � ENVIADO A FUN��O
	std::cout << "\nNum1 = " << &Num1;
	std::cout << "\nNum2 = " << &Num2;

	std::cout << "\nNum1 = " << Num1;
	std::cout << "\nNum2 = " << Num2 << "\n";

	system("PAUSE");
	return 0;
}

//e Num1 e Num2 s�o vari�veis locais a fun��o TrocaNumeros
void TrocaNumeros(int Num1, int Num2)
{
	//Como fazer a troca de valores de dois n�meros?
	//precisamos de um local tempor�rio para armazenar o valor de Num1 antes dele receber novo valor!
	//Vari�vel tempor�ria que guarda valor de Num1
	//Ex: se for digitado 10 Temp = 10 e se for digitado Num2 = 20 temos
	std::cout << "\nNum1 Fun��o = " << &Num1;
	std::cout << "\nNum2 Fun��o = " << &Num2;

	int Temp{ Num1 };
	//Num1 passa a ser 20
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Por�m....
	Num2 = Temp;
	//Ent�o aqui a troca ocorre apenas nas vari�veis locais
	//Numero1 e Numero2 ficam intactos sem altera��o!
}