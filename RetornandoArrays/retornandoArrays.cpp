#include<iostream>
#include<array>

//****** pROT�TIPOS DAS FUN��ES O CERTO � ESTAREM EM .H ****////


void DuplicaVetor(int *Array, int Tam);
// Esta fun��o tab�m recebe um vetor via ponteiro, mas tamb�m retorna um ponteiro, para um tipo INT, ele vai retornar o endere�o de mem�ria do vetor
int *InverterVetor(int *Array, int Tam);
// recebe via ponteiro o endere�o do Array(Vetor) e mostra o array(Vetor)
void MostraVetor(int *Array, int Tam);


int main()
{

	int Numeros[] = { 1,2,3,4,5,6,7,8,9,10 };
	int Tam = std::size(Numeros); // Retorna a quantidade de elementos , tamanho do vetor
	// Chama a fun��o e passa o vetor numeros para ela , o endere�o do primeiro elemento do vetor numeros ser� capturado pela fun��o que definimos *Array(ponteiro)
	MostraVetor(Numeros, Tam);
	DuplicaVetor(Numeros, Tam);
	MostraVetor(Numeros, Tam);
	MostraVetor(InverterVetor(Numeros, Tam), Tam);

	system("PAUSE");
	return 0;
}

void DuplicaVetor(int *Array, int Tam)
{
	// Fun��o recebe o vetor e duplica o valor de seus elemento modificando-os pois o vtor foi recebido por referencia de ponteiro *Array
	for (int i = 0; i < Tam; i++) 
	{
		Array[i] = 2 * Array[i];
	}
}

int* InverterVetor(int* Array, int Tam) 
{
	int j = 0;
	static int ArrayInvertido[10];
	for (int i = Tam-1; i >= 0; i--)
	{	// aqui inverte o Vetor que foi passado,colocando seus elementos invertidos no novo array criado que ser� retornado para fun��o MostraVetor()		  
		ArrayInvertido[j]=Array[i];
		j++;
	}
	return ArrayInvertido;
}

// aqui recebe um vetor via ponteiro e mostra na tela, esta fun��o somente percorre "varre" o array recebido e mostra na tela seus elementos
void MostraVetor(int *Array, int Tam)
{
	std::cout << "[ ";
	for (int i = 0;i < Tam; i++)
	{
		std::cout << Array[i] << "  ";
	}
	std::cout << "] \n\n";
}
