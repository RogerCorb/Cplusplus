#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	//Declara uma refer�ncia//Significa que foi criado um apelido, um rotulo, um alias para a vari�vel Numero
	//Neste caso n�o � criada uma regi�o de mem�ria que vai conter algo dentro e que seria chamada Ref. Ref n�o tem endere�o na RAM.
	//N�o � uma vari�vel que podemos colocar algo dentro!
	//� apenas um atalho para Numero.

	int& Ref = Numero;
	//Para colocar na tela o valor que a referencia referencia basta colocar o nome da referencia. N�o precisa desreferenciar como
  //nos ponteiros. *ptr
	std::cout << "\nValor de Numero usando Ref: " << Ref << "\n";
	std::cout << "\nValor Endereco de Numero: " << &Numero << "\n";

	//Observe que &Ref ir� retornar o endere�o de N�mero pois uma referencia nasce e fica como novo r�tulo da vari�vel que ela 
  //referencia estando portanto no mesmo endere�o de Numero, neste caso.
	std::cout << "\nValor Endereco de Ref: " << &Ref << "\n";

	//J� aqui ser� criada uma vari�vel, um espa�o na mem�ria RAM e dentro deste espa�o de nome ptr ser� colocado o endere�o de 
  //mem�ria de Numero. � bem diferente da refer�ncia pois esta n�o contem um espa�o alocado, ela apenas � mais um nome, um r�tulo, 
  //um apelido para referenciar a vari�vel.
	int* ptr = &Numero;
	std::cout << "\nValor Endereco de ptr na RAM: " << &ptr << "\n";
	std::cout << "\nValor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "\nValor Endereco contido dentro de ptr: " << ptr << "\n";

	system("Pause");
	return 0;
}