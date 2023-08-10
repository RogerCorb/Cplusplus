#include <iostream>
#include <string>
#include <iomanip>


int main()
{
	setlocale(LC_ALL, "portuguese");
	double MaiorNumero{ 0 }, Numero01{ 0 }, Numero02{ 0 }, Maior{ 0 };
	int Resposta; bool OutraVerificacao{ true };

	//Enquanto OutraVerificacao for Verdadeiro(true) continuar o loop while
	while (OutraVerificacao)
	{
		system("CLS"); // Limpa Tela
		std::cout << "\nDigite Primeiro N�mero: ";
		std::cin >> Numero01;
		std::cout << "\nDigite Segundo N�mero: ";
		std::cin >> Numero02;
		//Operador Tern�rio se Numero01 for Maior que Numero02 Maior recebe valor Numero01 sen�o Maior recebe Numero02
		Maior = (Numero01 > Numero02) ? Numero01 : Numero02;
		std::cout << "\nO Maior N�mero �: " << Maior;

		std::cout << "\nDeseja fazer outra verifica��o? (Digite 0 para N�o e 1 para Sim) ";
		std::cin >> Resposta;

		//Se a resposta for 1 ou 0 entra neste if pois � v�lida
		if ((Resposta == 1) || (Resposta == 0))
		{
			//Operador tern�rio 
			OutraVerificacao = (Resposta == 1) ? true : false;
		}
		//sen�o ou seja se a resposta for diferente de 0 e 1 come�a a verifica��o de entrada v�lida
		else
		{
			do  //loop
			{
				system("CLS");
				std::cout << "\nResposta Inv�lida! (Digite 0 para N�o e 1 para Sim) ";
				std::cin >> Resposta;

				//ficar� em loop enquanto a resposta for diferente de 0 e de 1
			} while ((Resposta != 1) && (Resposta != 0));

			//Ao sair de Do While significa que a resposta voltou a ser v�lida e foi 0 ou 1
			//Logo � preciso saber SE o usu�rio quer continuar ou n�o e assim novamente atribuimos
			//O valor true se o usu�rio digitar 1 e false se usu�rio digitar 0
			OutraVerificacao = (Resposta == 1) ? true : false;
		}

	}
	//Se OutraVerificacao for false, indica que usu�rio digitou 0 indicando que n�o quer continuar
	//logo loop while ser� encerrado e programa encerrado
	std::cout << "\nPrograma Encerrado...\n";
	return(0);
}