#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // para usar set precision 

struct Aluno
{
	long int Matricula;
	std::string Nome;
	std::string Curso;
	int Semestre;
	double Mensalidade;

};//Aluno Aluno01 = { 111111, "Fulano", "TI", 4, 990.50 };

//Acima já poderíamo ter criado um objeto desta struc como o nome Aluno01 conforme 
// digitado acima retirando o comentario

/* Abaixo já definimos os protótipos dos métodos/funções
* que possuem os parametros do tipo/class/struct Aluno e são 
* capazes de receber os dados referente a cada mebro da struct
* matricula, nome, curso , smeestre , mensalidade
*/
 
void MostrarDados(Aluno Dado);
void MostrarDados(Aluno* Dado);
void AlterarDados(Aluno& Dado);
void AlterarDados(Aluno* Dado);

int main()
{
	
	Aluno Aluno01 = { 111111, "Fulano", "TI", 4, 990.50 };
	
	//Agora criammos via ponteiro um outro objeto com
	// as caracteristica do molde struct e este objeto 
	// por ter sido construido via ponteiro Aluno* Aluno02
	// estará na memoria HEAP da ram e a forma de acesso aos membros do objeto não podem ser por notação 
	// ponto , precisarão ser por notação FLEXA ->
	// 
	Aluno* Aluno02 = new Aluno;
	Aluno Aluno03;
	AlterarDados(&Aluno03);
	system("CLS");
	MostrarDados(&Aluno03);
	std::cout << "\nANTES DE MODIFICAR\n";
	MostrarDados(Aluno01);
	AlterarDados(Aluno01);
	std::cout << "\nDEPOIS DE MODIFICAR \n";
	MostrarDados(Aluno01);


	std::cout << "\nANTES DE MODIFICAR COM PONTEIROS\n";
	AlterarDados(Aluno02);
	std::cout << "\nDEPOIS DE MODIFICAR COM PONTEIROS \n";
	MostrarDados(Aluno02);
	system("PAUSE");
	return 0;
}

void MostrarDados(Aluno Dado)
{
	std::cout << "**************DADOS DO ALUNO****************\n";
	std::cout << "\t Nome: " << Dado.Nome << std::endl;
	std::cout << "\t Curso: " << Dado.Curso << std::endl;
	std::cout << "\t Semestre: " << Dado.Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado.Matricula << std::endl;
	std::cout << "\t Mensalidade " << "R$" << std::fixed << std::setprecision(2) << Dado.Mensalidade << std::endl;
	std::cout << "********************************************\n\n";
}

void MostrarDados(Aluno* Dado)
{
	std::cout << "**************DADOS DO ALUNO****************\n";
	std::cout << "\t Nome: " << Dado->Nome << std::endl;
	std::cout << "\t Curso: " << Dado->Curso << std::endl;
	std::cout << "\t Semestre: " << Dado->Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado->Matricula << std::endl;
	std::cout << "\t Mensalidade " << "R$" << std::fixed << std::setprecision(2) << Dado->Mensalidade << std::endl;
	std::cout << "********************************************\n\n";

}

void AlterarDados(Aluno& Dado)
{
	Dado.Nome = "Beltrano";
	Dado.Curso = "Engenharia";
	Dado.Semestre = 1;
	Dado.Matricula = 22222;
	Dado.Mensalidade = 870.99;
}

void AlterarDados(Aluno* Dado)
{
	Dado->Nome = "Cicrano";
	Dado->Curso = "Biologia";
	Dado->Semestre = 2;
	Dado->Matricula = 33333;
	Dado->Mensalidade = 899.90;
}