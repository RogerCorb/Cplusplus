#include <iostream>

int main()
{
	int Numero{ 4096 };
	//precisamos iniciar o ponteiro
	//como est� ele aponta para algum endere�o qualquer
	//um valor lixo de mem�ria
	//Esta forma � um atalho para declarar e j� iniciar a vari�vel ponteiro
	//Por�m confude os iniciantes pois o operador  * est� presente
	//MAs voc� pode ler assim
	//int *ptr esta parte apenas declara uma vari�vel ponteiro de nome ptr
	//= &Numero esta parte coloca dentro da vari�vel ptr o endere�o de mem�ria da vari�vel Numero;
	//� uma simplica��o dos seguintes passos
	int* ptr;
	ptr = &Numero;
	//estas duas linhas acima � o mesmo que a linha abaixo
	//int *ptr = &Numero;
	std::cout << "\nValor da Variavel Numero: " << Numero << "\n";
	std::cout << "\nValor da Variavel ptr: " << ptr << "\n";
	std::cout << "\nValor do Endere�o de Numero: " << &Numero << "\n";
	std::cout << "\nValor do Endere�o que ptr esta carregado na mem�ria RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na variavel Numero apontada por ptr: " << *ptr << "\n";
	

	// Aqui o *PTR= alterou o valor contido na variavel NUMERO atrav�s do seu endere�o de mem�ria
	*ptr = 20963;
	std::cout << "\nValor contido na variavel Numero apos o comando *ptr=  : " << *ptr << "\n";

	system("PAUSE");
	return 0;
}