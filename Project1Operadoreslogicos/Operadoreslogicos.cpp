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
	//A vari�vel booleana MaiorQue100 ir� receber
	//o valor l�gico da compara��o (Numero > 100)
	// Numero � maior que cem? Se o numero digitado for maior que 100 a vri�avel recebe 1 Verdade
	// se n�o recebe 0 que � false
	std::cout << "O Resultado l�gico que verifica se numero"
		"o numero digitado � maior que 100 � .:" << Maiorque100 << "\n";

		
		// True = 1 e False = 0" << "\n";
	ResultadoLogico = ((Numero > 100) && (Numero != 0));
	std::cout << "O Resultado L�gico da Express�o ((Numero > 100) && (Numero != 0)) �: " << ResultadoLogico << std::endl;
	ResultadoLogico2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O Resultado L�gico da Express�o ((Numero == 100) || (Numero > 200)) && (Numero < 1000); �: " << ResultadoLogico2 << std::endl;
	system("PAUSE");
	return 0;
}