#include <iostream>

/*Relembrando, uma vari�vel � global quando ela for declarada FORA de qualquer fun��o do c�digo*/
int VarGlobalNaoInicializada;//<----Alocada no .bss Segmento de dados n�o inicializados
int VarGlobalInicializada = 10;//<----Alocada no Segmento de dados inicializados(.data) 
static int VarGlobalStaticNaoIncializada;//<----Alocada no.bss Segmento de dados n�o inicializados
static int VarGlobalStaticInicializada = 5;//<----Alocada no Segmento de dados inicializados(.data) 
int* PonteiroGlobalNaoInicializado;//<----Alocada no .bss Segmento de dados n�o inicializados
int* PonteiroGlobalInciizado = &VarGlobalInicializada;//<----Alocada no Segmento de dados inicializados(.data) 
/*Observe que este acima s�o ponteiros globais e por isso estar�o em .bss ou .data segment*/

class Casa 
{
public:
	int NumnQuartos;
	float Tamanho;
	bool bTemSuite;
	/* Criamos a classe Casa o molde para objetos usarem os atributos dessa classe est�o
	declaradas como publicase isto n�o est� certo, correto em rela��o aos atributos de uma
	class � que eles devem sempre ser declarados como PRIVATE e seus valores s� podem ser
	modificados por algum m�todo Set da class ex: void SetMostrarTamanho(); */
	float MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
};

/*Agora temos uma fun��o que � a fun��o principal main(). O que for declarada dentro dela 
ser� uma vari�vel local a esta fun��o main. Mais aten��o! new Casa() est� criando 
din�micamente um objeto e por isso este objeto vai ficar na regi�o de mem�ria onde 
residem os recursos alocados din�micamente que � a HEAP*/
int main()
{
	int VarLocal = 20;//<---Estar� na stack dentro da STACK FRAME da fun��o main
	int* PonteiroLocal = &VarLocal;//<---Estar� na stack dentro da STACK FRAME da fun��o main
	
	/*Aqui criamos um objeto na Stack e um ponteiro do tipo Casa de nome CaseDePraiaStack.
	Ent�o CaseDePraiaStack ir� apontar para um objeto criado na STACK que teve como molde
	a classe Casa. � muito comum achar que CasaDePraiaStack seja o objeto. 
	N�o �! ele apenas � um  ponteiro para um objeto do tipo da classe Casa que ser� 
	alocado neste caso na STACK*/
	Casa CaseDePraiaStack;

	/*Aqui  CasaDePraia � um ponteiro local a fun��o main e portanto estar� aramazenado na stack dentro da stack frama da fun��o main(). Este ponteiro CasaDePraia ir� apontar para um objeto criado din�micamente (new Casa()) e que portanto este objeto estar� na Heap*/
	Casa* CasaDePraia = new Casa();

	CaseDePraiaStack.Tamanho = 100;
	CasaDePraia->MostrarTamanho();

	CasaDePraia->Tamanho = 50;
	CasaDePraia->MostrarTamanho();

	system("PAUSE");
	return 0;
}

float Casa::MostrarTamanho()
{
	static int QtdeVezesMostrouTamanho = 0;
	/* Aqui apenas desta vari�vel estar dentro de uma fun��o ela estar� armazenada
	na regi�o de mem�ria data segment(Segmento de dados inicializados(.data)). Elafoi
	delcarada como static, logo apos o m�todo ser executado esta vair�vel aramzena o valor
	incrementado ++ em seu inteiror, se chamarmos este metodo novamente a variavel 
	ser� incrementada em de novo , contando dessa forma as vezes qu este m�todo foi 
	usado no sistema. */
	QtdeVezesMostrouTamanho++;
	system("CLS");
	std::cout << "\nQtde Vezes mostrou tamanho: " << QtdeVezesMostrouTamanho << "\n";
	return Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumnQuartos;
}

bool Casa::TemSuite()
{	
	return true;
}