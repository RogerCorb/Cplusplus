#include <iostream>
#include <iomanip> // Necess�ria incluss�o para o set locale

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("COLOR 0A");
	float num1, num2, num3;
	float Media{0.0};
	char resposta;
	do
	{
		std::cout << " Digite o primeiro N�mero.: ";
		std::cin >> num1;
		std::cout << " Digite o segundo N�mero.: ";
		std::cin >> num2;
		std::cout << " Digite o Terceiro N�mero.: ";
		std::cin >> num3;
		Media = ((num1 + num2 + num3) / 3); // Media aritim�tica soma e divide por tres
		std::cout << "Numeros Digitados .: " << num1 << " " << num2 << " " << num3 << " " << "\n";
		std::cout << "M�dia Aritm�tica .: " << Media << "\n";
		std::cout << "\nDeseja calcular outra M�dia Aritm�tica? (Responda S para Sim e N para n�o:) ";
		std::cin >> resposta;
	} while (resposta == 'S' || resposta == 's'); // Sai do loop apenas se o OU for falso ou seja se
	//Se resposta for diferente de S e diferente de s. Lembre que o OU || s� ser� falso de todas as senten�as forem //falsas. Assim se o usu�rio digitar N ou qualquer outra coisa o programa sair� mas se digitar S ou s o programa volta e pede novamente os n�meros.
	
	std::cout << "\nSaindo do programa...";
	system("PAUSE");
	return 0;
		

}