#include <iostream>
#include <iomanip>
#include <string> // para trabalhar com as funções de string

int main()
{
	
	system("COLOR A0");
	setlocale(LC_ALL, "portuguese");
		
	char resposta{ ' ' }, Caractere{ 'c' };
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	std::string texto{ "Texto da String.:" };
			
	do
	{
		std::printf("Valor Número Inteiro =%d Real=%.2f Caractere.:%c Texto:%s \n", NumeroInteiro,NumeroReal,Caractere,texto.c_str());
		std::printf("O Valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", Caractere, Caractere);
		/*%d Número decimal inteiro (int).
	%f	 Número decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o código ASCII correspondente ao valor dado.
	%s	 Sequência de caracteres (string, em inglês).
	*/
		std::cout << "\nDeseja continuar no programa .:";
		std::cin >> resposta;

	} while (resposta == 'S' || resposta == 's');
	std::cout << "Saindo do programa ....: " << "\n";
	system("PAUSE");
	return 0;
}
