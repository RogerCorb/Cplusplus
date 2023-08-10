#include<iostream>
#include"Matematica.h"


void CalculoMatematico()
{

	    int Num1, Num2;
		
			Num1 = Num2 = 0;
			std::cout << "\n Entre com o primeiro numero..: ";
			std::cin >> Num1;
			std::cout << "\n Entre com o segundo numero ..: ";
			std::cin >> Num2;
			std::cout << "\n";
			std::cout << " \nO Resultados das operações com estes numeros são.:\n";
			F_resultados(Num1, Num2);
					
		
}


int F_resultados(int Num1, int Num2)
{
	int Subtracao = 0;
	Subtracao = (Num1 > Num2) ? (Num1 - Num2) : (Num2 - Num1);
	std::cout << "\n Soma dos dois numeros .......= " << (Num1 + Num2);
	std::cout << "\n Subtracao dos dois numero ...= " << Subtracao ; 
	std::cout << "\n Multipliccao dos dois numero.= " << (Num1 * Num2);
	std::cout << "\n Divisão dos dois numero......= " << (Num1 / Num2);
	std::cout << "\n Potencia dos numeros.........= " << (Num1 + Num2);
	std::cout << "\n Raiz quadradada dos numeros := " << (Num1 + Num2);
	std::cout << "\n";
	char Resposta;
	std::cout << "\n Deseja continuar e verificar outros numeros(S / N) ? ";
	std::cin >> Resposta;
	return Resposta;
}
/*
bool isTrue()
{
	char Resposta;
	std::cout << "\n Deseja continuar e verificar outros numeros(S / N) ? ";
	std::cin >> Resposta;
	switch(Resposta)
	{
	case:'S'
			return true;
			
	case:'s'
			return true; 
	default:
			return false;
	}
}
*/