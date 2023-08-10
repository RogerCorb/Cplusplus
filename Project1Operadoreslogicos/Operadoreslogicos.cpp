#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	double Numero;
	bool ResultadoLogico, ResultadoLogico2,Maiorque100;
	std::cout << "Digite um Numero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	Maiorque100 = (Numero > 100);
	//A variável booleana MaiorQue100 irá receber
	//o valor lógico da comparação (Numero > 100)
	// Numero é maior que cem? Se o numero digitado for maior que 100 a vriáavel recebe 1 Verdade
	// se não recebe 0 que é false
	std::cout << "O Resultado lógico que verifica se numero"
		"o numero digitado é maior que 100 é .:" << Maiorque100 << "\n";

		
		// True = 1 e False = 0" << "\n";
	ResultadoLogico = ((Numero > 100) && (Numero != 0));
	std::cout << "O Resultado Lógico da Expressão ((Numero > 100) && (Numero != 0)) é: " << ResultadoLogico << std::endl;
	ResultadoLogico2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O Resultado Lógico da Expressão ((Numero == 100) || (Numero > 200)) && (Numero < 1000); é: " << ResultadoLogico2 << std::endl;
	system("PAUSE");
	return 0;
}