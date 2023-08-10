#include <iostream>

/*programa para escrever em cada linha as palavras
utilizando std::cout e "\n"... \n insere a quebrade linha
no lugar de std::endl*/

/*Observe que pode ser realizado apenas 01 std escopo operador cout
para todas as palavras lembrando que na ultima palavra é necessário fechar o comando
com o ; */

//neste vamos mudar a cor de fundo 4
//e cor da letra 5

int main()

{
	system("COLOR 47");
	std::cout
		<< "VOU" << "\n"
		<< "APRENDER" << "\n"
		<< "PROGRAMAR" << "\n"
		<< "NA" << "\n"
		<< "LINGUAGEM" << "\n"
		<< "C++" << "\n";

	system("PAUSE");
	return(0);
}