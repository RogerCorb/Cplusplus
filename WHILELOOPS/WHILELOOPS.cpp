#include<iostream>

using namespace std;

int main()

{
	int numero = 0;

	while (numero <= 50)     /* mostrando so os numeros �MPARES na tela % que � 
			                  resto da divis�o se for 1 OU SEJA != a 0 o numero � impar*/
	{
		if (numero % 2 !=0) /* mostrando so os numero PARES na tela o % que � 
			                  resto da divis�o se for = a 0 o numero � par*/
		{
			cout << numero<< ", ";
		}
		
		numero++;
	}

	system("PAUSE");
	return 0;
}