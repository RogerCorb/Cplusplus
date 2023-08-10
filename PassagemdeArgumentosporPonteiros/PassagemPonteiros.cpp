#include <iostream>
#include <math.h>

void TrocaNumeros(int* Num1, int* Num2); // Agora funciona a fun��o pois aqui solicitamos que seja passado para fun��o o endere�o de memoria dos numeros digitados, pois Num1 agora � uma variavel ponteiro INT que receber� o endere�o de memmemoria de NUMERO01

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
	
	//Aqui passamos para fun��o o ENDERE�O de mem�ria deNumero01 e de Numero02 logo a troca se dar� por essa refencia que foi feita de endere�amento de memoria das variaveis
	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\nNum1 = " << &Numero1;
	std::cout << "\nNum2 = " << &Numero2;

	std::cout << "\nNum1 = " << Numero1;
	std::cout << "\nNum2 = " << Numero2 << "\n";

	system("PAUSE");
	return 0;
}

// Aqui a fun��o espera receber o ENDERE�O de mem�ria pois declaramos aqui como ponteiros seguindo a declara��o do prot�tipo da fun��o que foi tamb�m ponteiros, logo precisaremos passar o endere�o de memoria da vari�veis para dentro da fun��o
void TrocaNumeros(int* Num1, int* Num2)
{
	// Aqui ent�o trabalhamos desreferenciando o ponteiro solicitando para que ele aponte o conte�do do endere�o de memoria pasado e troque l� embaixo estes conte�dos atrav�s do ender�o de memoria.
	std::cout << "\nNum1 Fun��o = " << *Num1;
	std::cout << "\nNum2 Fun��o = " << *Num2;

	int Temp{ *Num1 }; // temp recebe o conteudo do endere�o de memoria da vari�vel ponteiro Num1
	//Num1 passa a ser 20
	*Num1 = *Num2;// o endere�o de mem�ria da variavel ponteiro Num1 recebe o endere�o de memoria da vari�vel Num2 com seu conteudo claro
	//Num2 passa a ser 10. Logo foi trocado

	*Num2 = Temp;

}

