#include <iostream>
#include <tchar.h>
#include <cstring>

int main()
{
	_tsetlocale(LC_ALL,_T("portuguese"));
	system("COLOR 6f");
	char caractere;
	
	std::string texto{"Vou aprender C++ e passar para o lado negro da for�a !!!"};
	float TamanhoTexto;
	TamanhoTexto = strlen(texto);
	std::cout << "O que vc vai aprender mesmo Rog�rio " << "\n";
	//std::printf("O que vc vai aprender mesmo Rog�rio ",texto.c_str());
	std::cout << texto << &texto << TamanhoTexto << "\n";
	
	system("PAUSE");
	return 0;

}