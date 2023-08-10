#include <iostream>
#include <tchar.h> // foi incluído para possibilitar a acentuação da função _tsetlocate

int main()

{
	_tsetlocale(LC_ALL, _T("Portuguese"));
	system("COLOR 0A");
	int NumVidas = 5;
	int pontuacao = 1350;
	std::cout << "******INICIO DO JOGO*********" << "\n";
	std::cout << "Vidas jogador: " << NumVidas << "\n";
	std::cout << "Pontuação: " << pontuacao << "\n";
	std::cout << "*****************************" << "\n";
	std::cout << "Endereço que NumVidas ocupa na memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação ocupa na memória RAM: "  << &pontuacao << "\n";
	std::cout << "*****************************" << "\n";
	std::cout << "******DURANTE O JOGO*********" << "\n";
	
	pontuacao = pontuacao + 150; // escrever pontuacao +=150 funciona da mesma forma
	NumVidas = NumVidas - 1; // escrever NumVidas -= 1 funciona da mesma forma

	std::cout << "Vidas jogador: " << NumVidas << "\n";
	std::cout << "Pontuação: " << pontuacao << "\n";
	std::cout << "*****************************" << "\n";

	system("PAUSE");
	return(0);

}