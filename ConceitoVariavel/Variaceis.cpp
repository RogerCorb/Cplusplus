#include <iostream>
#include <tchar.h> // foi inclu�do para possibilitar a acentua��o da fun��o _tsetlocate

int main()

{
	_tsetlocale(LC_ALL, _T("Portuguese"));
	system("COLOR 0A");
	int NumVidas = 5;
	int pontuacao = 1350;
	std::cout << "******INICIO DO JOGO*********" << "\n";
	std::cout << "Vidas jogador: " << NumVidas << "\n";
	std::cout << "Pontua��o: " << pontuacao << "\n";
	std::cout << "*****************************" << "\n";
	std::cout << "Endere�o que NumVidas ocupa na mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Pontua��o ocupa na mem�ria RAM: "  << &pontuacao << "\n";
	std::cout << "*****************************" << "\n";
	std::cout << "******DURANTE O JOGO*********" << "\n";
	
	pontuacao = pontuacao + 150; // escrever pontuacao +=150 funciona da mesma forma
	NumVidas = NumVidas - 1; // escrever NumVidas -= 1 funciona da mesma forma

	std::cout << "Vidas jogador: " << NumVidas << "\n";
	std::cout << "Pontua��o: " << pontuacao << "\n";
	std::cout << "*****************************" << "\n";

	system("PAUSE");
	return(0);

}