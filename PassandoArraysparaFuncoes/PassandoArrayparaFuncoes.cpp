#include<iostream>
#include<array>// incluido para trabalharmos com funções desta biblioteca

// Declaramos um protótipo de função e criamos a mesma lá embaixo
// esta função irá receber um vetor de tipo INTEIRO como é vetor que ela receberá precisa infomar o colchetes[]

void MostrarVetor(int Array[],int TamVetor);



int main()
{
	int Vetor[] = {1,2,3,4,5,6,7,8,9,10};
	int TamVetor;
	TamVetor = std::size(Vetor); //std::size da biblioteca <array> nos retorna o qtd de elementos do vetor 
	
	MostrarVetor(Vetor,TamVetor); // na chamada desta função, para ENVIARMOS o vetor para dentro dela basta enviar o nome dele conforme fazemos aqui.
	system("PAUSE");
	return 0;

}

// para receber um vetor basta colocar o nome do vetor e colchetes [] aqui a mesma coisa do protótipo da função, TIPO e NOME com o []
void MostrarVetor(int Array[], int TamVetor)
{	

	for (int i = 0; i < TamVetor; i++) 
	{
		std::cout << " \nElementos do vetor .: " << Array[i];
	}
}
