#include <iostream>
#include "FuncoesMenu.h" // colocamos o INCLUDE deste arquivo com aspas 
                         // porque nosso arquivo.H está no diretorio do projeto
//#include <cmatch> // função matematica potencia "pow()" usa esta biblioteca


using namespace std;

// ************************* Funçoes exemplos **********************
// Função que retorna verdadeiro se a divisão de um numero
// por 2 retornar 0, siginificando que o numero é par

/*int main() {
	
	char Continua = 's';
	int numero;
	cout << soma(100,500)<<+"\n";
	
	cout << "\nDigite um numero.: ";
	cin >> numero;
	if (isPar(numero))
	{
		cout << "\n O numero "<<numero<<" e par !";
	}
	else 
	{
		cout << "\n O numero "<<numero<<" e impar !";
	}
	system("PAUSE");
	
	while (Continua=='s' || Continua =='S'){

		//system("cls");
		Mensagem();
		int numero, numeroasersomado = 0;
		cout << "\n Digite um numero.:";
		cin >> numero;
		cout << "\n Digite o numero a ser somado: ";
		cin >> numeroasersomado;
		cout << "\n Soma destestes numeros será.: " << SomaAUmNumero(numero, numeroasersomado);
		//cout << "Soma deste Numero ocm 100: " << numero + 1000;
		//cout << "Soma deste Numero ocm 100: " << numero + 10000;
		cout << "\n Deseja fazer outra soma S-Sim ou N=Nao.:";
		cin >> Continua;
		Continua=Verifica(Continua);

	}
	return 0;
}*/

int main() {

	EntradaCalculadora();
	system("PAUSE");
	return 0;
}





