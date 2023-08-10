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
		cout << "\n Qual operação deseja fazer "<< std::endl;
		cout << "\n + Adição";
		cout << "\n - Subtração";
		cout << "\n / Divisão";
		cout << "\n * Multiplicação...>  ";
		cin >> Operacao;
		/* os cases não aceitam operadores lógicos portanto não é possivel fazer
		copração eles apenas vao avaliar a entrada de valor INT... nesse caso 
		pode ser um caracter pois a tabela ASCII cada caracter é um numero inteiro*/

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
		cout << "\n Deseja fazer outra operação (s/n).. ? ";
		cin >> Resposta;
		
	} while (Resposta == 'S' or Resposta == 's');

	system("\nPAUSE");
	return 0;

}