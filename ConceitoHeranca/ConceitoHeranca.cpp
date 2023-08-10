#include <iostream>

//Classe Base tamb�m chamada de Superclasse, Classe M�e/Pai
class Base
{
	//As se��es public, protegida e privada de uma classe devem ser declaradas nesta ordem: A se��o public(p�blica) depois a se��o protected(protegida) e depois a se��o private(privada)
	//Indica que os membros do objeto criado a partir desta classe ter�o acesso direto a todos os atributos e fun��es presentes na se��o public
public:
	void SolicitarNumeros()
	{
		std::cout << "Num1: ";
		std::cin >> Num1;
		std::cout << "Num2: ";
		std::cin >> Num2;
		//Chamada do m�todo privado da classe dentro da pr�pria classe o que � permitido
		/*Ou seja n�o � necess�rio ter todos os metodos p�blicos. Neste caso apenas SolicitarNumeros � p�blico e isso basta, pois este m�todo ir� chamar os demais m�todos privados da classe*/
		MostrarResultado(Num1, Num2);
	}
	//Aqui indica que os membros da se��o privada s� ser�o acess�veis dentro do c�digo da classe. O objeto n�o poder� acessar diretamente estes itens atributos e fun��es
private:
	float Num1, Num2;
	float Soma(int Num1, int Num2)
	{
		return (Num1 + Num2);
	}

	//Veja que este m�todo s� poder� ser chamado(invocado) dentro do c�pdigo da classe
	void MostrarResultado(int Num1, int Num2)
	{
		std::cout << "Soma de: " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << "\n";
	}

};

//Agora declaramos uma classe que herda da classe Base, por�m ela n�o tem nada est� vazia
//A classe Derivada � chamada de subclasse, classe filha/filho
class Derivada :public Base {};

int main()
{

	//Criamos um objeto a partir da classe Derivada
	Derivada Obj;
	Obj.    //SolicitarNumeros();
	/*Isso indica que uma classe herda tudo de sua classe Base(Superclasse) tem, mas N�O HERDA
	OS ITENS PRIVADOS(PRIVATE) DA SUPERCLASSE(CLASSE BASE)*/
	system("PAUSE");

	return 0;
}