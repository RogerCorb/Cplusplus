#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a refer�ncia n�o pode ficar sem ser atribuida logo
	//na sua cria��o!
	int& RefNum{ Numero2 }; // forma padronizada de inicializar
	//o mesmo que int &RefNum = Numero2;
	//Agora est� ok pois Ref passar ser uma referencia de Numero2
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da refer�ncia sem precisar de *
	//&RefNum = Numero;
	//Aqui n�o ser� permitido pois refer�ncia s� pode ser atribuida uma �nica vez!
	int* ptr;
	//um ponteiro pode ser declarado sem ser inicializado!
	//At� mesmo assim � permitido!
	//depois voc� pode iniciar
	ptr = &Numero;

	*ptr = 4048;
	std::cout << "\nValor de Numero: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endere�o, fazer ele apontar para outra vari�vel
	//isso � permitido!
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "\nValor de Numero2: " << *ptr << "\n";
	return 0;
}