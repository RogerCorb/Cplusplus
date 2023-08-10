#include <iostream>
//PROT�TIPO
//voc� pode colocar valores padr�es no prot�tipo
//e ent�o quando voc� chamar a fun��o poder� omitir
//argumentos pois a fun��o ir� utilizar o argumento padr�o se voc� n�o informar o argumento quando da chamada da fun��o.
//Para colocar um valor padr�o basta colocar =
void Coordenadas(int x, int y, int z = 1);
//Voc� n�o � obrigado a colocar todos os argumentos padr�o. Por�m se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main()
{
	//apesar da fun��o solicitar na chamada a coloca��o de 3 argumentos que ser�o enviados aos par�metros
	//x, y e z. Esta chamada sem voc� colocar um dos argumentos ir� funcionar, pois eles tem argumentos padr�es
	Coordenadas(5, 6);
	system("PAUSE");
	return 0;
}


// Fun��o  tipo vazio (VOID) ou nada a retornar.
void Coordenadas(int x, int y, int z)
{
	//x = x * 10;
	x *= 10;
	//y = y * 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")\n";
}