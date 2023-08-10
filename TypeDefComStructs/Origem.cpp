#include<iostream>

//* criamos a struct Livro normal nesse bloco
struct Livro
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;
};

//poderiamos cri�-la ja dando um apelido a ela como abaixo 
typedef struct Livro1
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;
}Registrolivro;
//Agora esta struct tem o apelido Registrolivro


/*Aqui voc� criou um alias, um apelido para struct Livro. Este apelido se chama RegistroLivro*/
//Por�m o mais usual � assim
typedef struct Livro
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;
} RegistroLivro;

//Acima � apenas um atalho um forma de fazer o seguinte
/*Aqui voc� criou um alias, um apelido para struct Livro. Este apelido se chama RegistroLivro*/
//typedef struct Livro RegistroLivro;

//CUIDADO!!!!! isso abaixo criar uma vari�vel!!!
//agora RegistroLivro � uma vari�vel!!! criada via forma compactada de cria��o de vari�veis do tipo struct

int main()
{
	Livro Aluno01; // Criamos o objeto com os mebros de struct Livro
	Registrolivro Aluno02; // Criamos o obj com os moldes de struct Livro1 pelo apelido de typedef RegistroLivro 
	Aluno01.ID = 8;
	Aluno02.ID = 10;

	std::cout << Aluno01.ID << "   .:" << Aluno02.ID << "\n";
	//Aqui � criada uma vari�vel do tipo struct Livro mas sem usar o alias o apelido criado via typedef
	//Agora um vetor de Structs
	struct Livro Aluno01[5];

	//Aqui criamos uma vari�vel do tipo RegistroLivro
	//Por�m RegistroLivro � apenas um apelido uma alias para struct Livro
	//O pr�-processador vai trocar este nome por struct Livro antes da compila��o, simples assim...
	//Por�m muitos usam para simplicar o c�digo e digitar menos
	RegistroLivro Aluno02;
	//Criamos um ponteiro capaz de apontar para uma vari�vel do tipo RegistroLivro que nada mais � que um alias de struct livro
	RegistroLivro* Ponteiro;
	//Agora Ponteiro recebe o endere�o do objeto Aluno02;
	Ponteiro = &Aluno02;

	//Podemos fazer assim com Ponteiros
	Ponteiro->ID = 0002;
	Ponteiro->Preco = 99.99;
	//Agora acima � com a flecha ->

	//Aqui � ponto pois o objeto Aluno02 est� na stack
	Aluno02.ID = 0001;
	Aluno02.Preco = 33.99;
	Aluno02.Titulo = "Martrix";
	Aluno02.Editora = "Abril";
	
	system("PAUSE");
	return 0;
}


