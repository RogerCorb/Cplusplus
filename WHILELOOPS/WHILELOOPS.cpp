#include<iostream>

using namespace std;

int main()

{
	int numero = 0;

	while (numero <= 50)     /* mostrando so os numeros ÍMPARES na tela % que é 
			                  resto da divisão se for 1 OU SEJA != a 0 o numero é impar*/
	{
		if (numero % 2 !=0) /* mostrando so os numero PARES na tela o % que é 
			                  resto da divisão se for = a 0 o numero é par*/
		{
			cout << numero<< ", ";
		}
		
		numero++;
	}

	system("PAUSE");
	return 0;
}