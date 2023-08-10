#include<iostream>
using namespace std;

int main()
{
	system("cls");
	int Soma = 0;
	for (int i=1; i<=100;i++)
	{
		Soma=Soma+i;
	}
	cout << " \n esta e a soma acumulada de 1 ate 100 no for..:" << Soma << "\n";
	
	system("PAUSE");
	return 0;
}