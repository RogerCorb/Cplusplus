#include <iostream>
using namespace std;


class Casa
{
	// Definimos os Atributos que são representados pelas variáveis da classe elas são 
	// as características de cada objeto criado a partir dessa classe os atributos 
	// devem ser sempre PRIVATE e quem deverá mudar ou acessar os atributos são os métodos
	// ou funções que vc vai criar Set para passar valor para o atributo atra´vés de um método
  private:
	int NumQuartos;
	float Tamanho;
	bool bTemsuite;

	// Informamos os protótipos dos métodos ou funções da clase casa
	// e dizemos que elas são PUBLIC o que significa dizer que elas estarão
	// acessiveis fora do corpo da classe Casa, se vc NAO informar elas serão
	// consideradas privadas e vc só terá acesso DENTRO do corpo da classe CASA
  public:
	void MostrarTamanho();
	int ObtenhaNumerodeQuarto();
	bool TemSuite();
	void SetNumQuartos(int Num);
}; // este é o código da classe Casa, termina o seu corpo aqui.

// Então temos 


int main()
{

	// desta forma nós já instanciamos um objeto, criamos uma variável do tipo CLASSE nesse 
	// caso Casa , é como se declarássemos uma variável , int , float, bool, char etc...
	Casa CasaDePraia;


	// Então temos NomedoObjeto.NomedoMétodo da classe aqui CasadePraia é o OBJETO pois ele 
	// foi declarado com a clase Casa então CasaDePraia recebeu todos os parâmetros
	// escritos no corpo da Classe Casa. E para acessálos usamos assim conforme abaixo 
	// na notação PONTO
	CasaDePraia.MostrarTamanho();

	CasaDePraia.SetNumQuartos(5);

	system("PAUSE");
	return 0;

}


// o escopo operador :: indica que o Método(a função) MostrarTamanho pertence a classe casa
// logo estamos escrevendo o bloco de comandos que a função vai executar
// esta função é tipo void logo não precisa retornar nada VOID(Vazio) sem especificação nenhuma


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


// Criamos o método  SetNumQuartos para modificar o valor do atributo NumQuartos 
// da classe Casa.. 
void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos=Num;
	} 
	else
	{
		cout << "\n Numero de quartos inválidos\n";
	}

}

