#include <iostream> 

int main()

{
	int Numero;
	Numero = 45; 
	std::cout << " Valor Numero : " << Numero << std::endl;
	std::cout << " Tamanho da Variavel numero : " << sizeof(Numero) << std::endl;
	std::cout << " Endereco carregado na memoria da variavel numero : " << &Numero << std::endl;
	system("PAUSE");
	return(0);

}