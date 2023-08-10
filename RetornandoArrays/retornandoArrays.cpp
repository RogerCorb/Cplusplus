#include<iostream>
#include<array>

//****** pROTÓTIPOS DAS FUNÇÕES O CERTO É ESTAREM EM .H ****////


void DuplicaVetor(int *Array, int Tam);
// Esta função tabém recebe um vetor via ponteiro, mas também retorna um ponteiro, para um tipo INT, ele vai retornar o endereço de memória do vetor
int *InverterVetor(int *Array, int Tam);
// recebe via ponteiro o endereço do Array(Vetor) e mostra o array(Vetor)
void MostraVetor(int *Array, int Tam);


int main()
{

	int Numeros[] = { 1,2,3,4,5,6,7,8,9,10 };
	int Tam = std::size(Numeros); // Retorna a quantidade de elementos , tamanho do vetor
	// Chama a função e passa o vetor numeros para ela , o endereço do primeiro elemento do vetor numeros será capturado pela função que definimos *Array(ponteiro)
	MostraVetor(Numeros, Tam);
	DuplicaVetor(Numeros, Tam);
	MostraVetor(Numeros, Tam);
	MostraVetor(InverterVetor(Numeros, Tam), Tam);

	system("PAUSE");
	return 0;
}

void DuplicaVetor(int *Array, int Tam)
{
	// Função recebe o vetor e duplica o valor de seus elemento modificando-os pois o vtor foi recebido por referencia de ponteiro *Array
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
	{	// aqui inverte o Vetor que foi passado,colocando seus elementos invertidos no novo array criado que será retornado para função MostraVetor()		  
		ArrayInvertido[j]=Array[i];
		j++;
	}
	return ArrayInvertido;
}

// aqui recebe um vetor via ponteiro e mostra na tela, esta função somente percorre "varre" o array recebido e mostra na tela seus elementos
void MostraVetor(int *Array, int Tam)
{
	std::cout << "[ ";
	for (int i = 0;i < Tam; i++)
	{
		std::cout << Array[i] << "  ";
	}
	std::cout << "] \n\n";
}
