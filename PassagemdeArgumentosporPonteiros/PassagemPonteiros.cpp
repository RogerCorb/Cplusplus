#include <iostream>
#include <math.h>

void TrocaNumeros(int* Num1, int* Num2); // Agora funciona a função pois aqui solicitamos que seja passado para função o endereço de memoria dos numeros digitados, pois Num1 agora é uma variavel ponteiro INT que receberá o endereço de memmemoria de NUMERO01

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;
	std::cout << "\nValores depois da troca\n";
	
	//Aqui passamos para função o ENDEREÇO de memória deNumero01 e de Numero02 logo a troca se dará por essa refencia que foi feita de endereçamento de memoria das variaveis
	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\nNum1 = " << &Numero1;
	std::cout << "\nNum2 = " << &Numero2;

	std::cout << "\nNum1 = " << Numero1;
	std::cout << "\nNum2 = " << Numero2 << "\n";

	system("PAUSE");
	return 0;
}

// Aqui a função espera receber o ENDEREÇO de memória pois declaramos aqui como ponteiros seguindo a declaração do protótipo da função que foi também ponteiros, logo precisaremos passar o endereço de memoria da variáveis para dentro da função
void TrocaNumeros(int* Num1, int* Num2)
{
	// Aqui então trabalhamos desreferenciando o ponteiro solicitando para que ele aponte o conteúdo do endereço de memoria pasado e troque lá embaixo estes conteúdos através do enderço de memoria.
	std::cout << "\nNum1 Função = " << *Num1;
	std::cout << "\nNum2 Função = " << *Num2;

	int Temp{ *Num1 }; // temp recebe o conteudo do endereço de memoria da variável ponteiro Num1
	//Num1 passa a ser 20
	*Num1 = *Num2;// o endereço de memória da variavel ponteiro Num1 recebe o endereço de memoria da variável Num2 com seu conteudo claro
	//Num2 passa a ser 10. Logo foi trocado

	*Num2 = Temp;

}

