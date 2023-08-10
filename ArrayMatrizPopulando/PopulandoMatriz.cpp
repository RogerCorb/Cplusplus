#include<iostream>
#include<array>

//****** pROTÓTIPOS DAS FUNÇÕES O CERTO É ESTAREM EM .H ****////

// As duas fuções vão receber uma matriz , nesse caso elas precisam receber na chamada o nome da matriz e o numero de linhas ... aqui agente especifica a qtd de colunas que tem esta matriz nesse caso 5
void MostraVetor(int Array[][5],int row);
void PopularVetor(int Array[][5],int row);

int main()
{
	int Numeros[5][5];
	int Tam = std::size(Numeros); // Retorna a quantidade de elementos,tamanho do vetor
	PopularVetor(Numeros, Tam);	// Passando o nome da matriz e o qtd de "colunas"
	MostraVetor(Numeros, Tam);  // o tamnho do vetor na verdade
	system("PAUSE");
	return 0;
}

void MostraVetor(int Array[][5], int row) // Aqui declaramos a função que recebera o nome da matriz e o tamanho das colunas dessa matriz
{
	int i= 0;
	for (; i < row; i++)
	{
		std::cout << "\n";
		for (int j = 0; j < row; j++)
		{
			std::cout << " ";
			std::cout << Array[i][j];
		}
	}
}

void PopularVetor(int Array[][5], int row) //comentário na outra funçaõ acima aqui igual.
{
	for (int i = 0; i < row; i++)	
	{
		for (int j = 0; j < row; j++)
		{
			if (j == i)
			{
				Array[i][j] = 0;
			}
			else {
				if (i < j)
				{
					Array[i][j] = 1;
				}
				else {
					Array[i][j] = 2;
				}
			}

		}

	}

}
