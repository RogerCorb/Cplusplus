#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num1,num2;
	char Operacao,Resposta;

	do
	{
		system("CLS"); // LIMPANDO A TELA
		cout << "\n Digite um numero .: ";
		cin >> num1;
		cout << "\n Digite outro numero.:";
		cin >> num2;
		cout << "\n Qual opera��o deseja fazer "<< std::endl;
		cout << "\n + Adi��o";
		cout << "\n - Subtra��o";
		cout << "\n / Divis�o";
		cout << "\n * Multiplica��o...>  ";
		cin >> Operacao;
		/* os cases n�o aceitam operadores l�gicos portanto n�o � possivel fazer
		copra��o eles apenas vao avaliar a entrada de valor INT... nesse caso 
		pode ser um caracter pois a tabela ASCII cada caracter � um numero inteiro*/

		switch (Operacao) 
		{
		case '+':
			
			cout << "\n O Resultado da Soma dos numeros e ..: " << num1+num2; 
			break;
		case '-':
			
			cout << "\n O Resultado da Subtracaodos numeros e ..: " << num1-num2; 
			break;
		case '/':
			
			cout << "\n O Resultado da Dividsao dos numeros e ..: " << num1/num2;
			break;
		case '*':
			
			cout << "\n O Resultado da Multiplicacao numeros e ..: " << num1 * num2;
			break;
		default:cout << "\n Nenhuma das opcoes foram escolhidas...";
	    	break;
		}
		cout << "\n Deseja fazer outra opera��o (s/n).. ? ";
		cin >> Resposta;
		
	} while (Resposta == 'S' or Resposta == 's');

	system("\nPAUSE");
	return 0;

}