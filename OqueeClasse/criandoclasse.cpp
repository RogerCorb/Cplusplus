#include <iostream>

using namespace std;

class Casa
{

  private: // Atributos que poderão ser acessados pelos métodos que estão declarado aqui na classe
	int NumQuartos;
	float Tamanho;
	bool bTemsuite; 

  public: // Métodos / Funções que o objeto poderá realizar operações e acessar os atributos private acima

	void MostrarTamanho();
	int ObtenhaNumerodeQuartos();
	bool Temsuite();
	void SetNumQuartos(int Num);

};





void main()
{
  // Todo seu codigo principal aqui  
	Casa CasaDePraia;
	// Aqui INSTANCIAMOS a variável CasaDePraia
	// Informamos que ela é um objeto contendo a
	// arquitetura da classe Casa

	CasaDePraia.MostrarTamanho();
	CasaDePraia.ObtenhaNumerodeQuartos();
	CasaDePraia.Temsuite();
	
}

void Casa::MostrarTamanho()
{
	cout << "\nTamanho.: " << Tamanho;
}

int Casa::ObtenhaNumerodeQuartos()
{
	return NumQuartos; 
}

bool Casa::Temsuite()
{
	return false;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{		
		NumQuartos = Num;	
	}
	else
	{
		cout << "\n Numero de quartos inválidos";
	}

}
