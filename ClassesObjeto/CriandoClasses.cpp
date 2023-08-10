#include <iostream>
using namespace std;


class Casa
{
	// Definimos os Atributos que s�o representados pelas vari�veis da classe elas s�o 
	// as caracter�sticas de cada objeto criado a partir dessa classe os atributos 
	// devem ser sempre PRIVATE e quem dever� mudar ou acessar os atributos s�o os m�todos
	// ou fun��es que vc vai criar Set para passar valor para o atributo atra�v�s de um m�todo
  private:
	int NumQuartos;
	float Tamanho;
	bool bTemsuite;

	// Informamos os prot�tipos dos m�todos ou fun��es da clase casa
	// e dizemos que elas s�o PUBLIC o que significa dizer que elas estar�o
	// acessiveis fora do corpo da classe Casa, se vc NAO informar elas ser�o
	// consideradas privadas e vc s� ter� acesso DENTRO do corpo da classe CASA
  public:
	void MostrarTamanho();
	int ObtenhaNumerodeQuarto();
	bool TemSuite();
	void SetNumQuartos(int Num);
}; // este � o c�digo da classe Casa, termina o seu corpo aqui.

// Ent�o temos 


int main()
{

	// desta forma n�s j� instanciamos um objeto, criamos uma vari�vel do tipo CLASSE nesse 
	// caso Casa , � como se declar�ssemos uma vari�vel , int , float, bool, char etc...
	Casa CasaDePraia;


	// Ent�o temos NomedoObjeto.NomedoM�todo da classe aqui CasadePraia � o OBJETO pois ele 
	// foi declarado com a clase Casa ent�o CasaDePraia recebeu todos os par�metros
	// escritos no corpo da Classe Casa. E para acess�los usamos assim conforme abaixo 
	// na nota��o PONTO
	CasaDePraia.MostrarTamanho();

	CasaDePraia.SetNumQuartos(5);

	system("PAUSE");
	return 0;

}


// o escopo operador :: indica que o M�todo(a fun��o) MostrarTamanho pertence a classe casa
// logo estamos escrevendo o bloco de comandos que a fun��o vai executar
// esta fun��o � tipo void logo n�o precisa retornar nada VOID(Vazio) sem especifica��o nenhuma


void Casa::MostrarTamanho()
{
	cout << "\nMostrar tamanho .:" << Tamanho;
}

int Casa::ObtenhaNumerodeQuarto()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemsuite;
}


// Criamos o m�todo  SetNumQuartos para modificar o valor do atributo NumQuartos 
// da classe Casa.. 
void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos=Num;
	} 
	else
	{
		cout << "\n Numero de quartos inv�lidos\n";
	}

}

