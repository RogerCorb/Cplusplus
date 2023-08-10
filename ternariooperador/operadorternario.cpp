#include <iostream>
using namespace std;

int main()

{
	char Resposta = ' ';
		do
		{


			int Numero01, Numero02, Maiornumero;
			cout << "Digite o numero 01 .: ";
			cin >> Numero01;
			cout << "\n Digite o numero 02.:";
			cin >> Numero02;
			Maiornumero = (Numero01 > Numero02) ? Numero01 : Numero02;
			(Numero01 > Numero02) ? cout << "\nNumero 01 e o maior numero.. " << Numero01 << std::endl : cout << "\nNumero 02 e o maior numero.. " << Numero02 << std::endl;

			cout << "\ndeseja digitar outros numeros..:";
			cin >> Resposta;
		} while (Resposta == 'S' || Resposta == 's');
	
	
	system("PAUSE");
	return(0);

}
