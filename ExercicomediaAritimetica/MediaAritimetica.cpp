#include <iostream>
#include <iomanip> // Necessária inclussão para o set locale

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("COLOR 0A");
	float num1, num2, num3;
	float Media{0.0};
	char resposta;
	do
	{
		std::cout << " Digite o primeiro Número.: ";
		std::cin >> num1;
		std::cout << " Digite o segundo Número.: ";
		std::cin >> num2;
		std::cout << " Digite o Terceiro Número.: ";
		std::cin >> num3;
		Media = ((num1 + num2 + num3) / 3); // Media aritimética soma e divide por tres
		std::cout << "Numeros Digitados .: " << num1 << " " << num2 << " " << num3 << " " << "\n";
		std::cout << "Média Aritmética .: " << Media << "\n";
		std::cout << "\nDeseja calcular outra Média Aritmética? (Responda S para Sim e N para não:) ";
		std::cin >> resposta;
	} while (resposta == 'S' || resposta == 's'); // Sai do loop apenas se o OU for falso ou seja se
	//Se resposta for diferente de S e diferente de s. Lembre que o OU || só será falso de todas as sentenças forem //falsas. Assim se o usuário digitar N ou qualquer outra coisa o programa sairá mas se digitar S ou s o programa volta e pede novamente os números.
	
	std::cout << "\nSaindo do programa...";
	system("PAUSE");
	return 0;
		

}