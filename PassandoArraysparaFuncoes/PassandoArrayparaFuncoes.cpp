#include<iostream>
#include<array>// incluido para trabalharmos com fun��es desta biblioteca

// Declaramos um prot�tipo de fun��o e criamos a mesma l� embaixo
// esta fun��o ir� receber um vetor de tipo INTEIRO como � vetor que ela receber� precisa infomar o colchetes[]

void MostrarVetor(int Array[],int TamVetor);



int main()
{
	int Vetor[] = {1,2,3,4,5,6,7,8,9,10};
	int TamVetor;
	TamVetor = std::size(Vetor); //std::size da biblioteca <array> nos retorna o qtd de elementos do vetor 
	
	MostrarVetor(Vetor,TamVetor); // na chamada desta fun��o, para ENVIARMOS o vetor para dentro dela basta enviar o nome dele conforme fazemos aqui.
	system("PAUSE");
	return 0;

}

// para receber um vetor basta colocar o nome do vetor e colchetes [] aqui a mesma coisa do prot�tipo da fun��o, TIPO e NOME com o []
void MostrarVetor(int Array[], int TamVetor)
{	

	for (int i = 0; i < TamVetor; i++) 
	{
		std::cout << " \nElementos do vetor .: " << Array[i];
	}
}
