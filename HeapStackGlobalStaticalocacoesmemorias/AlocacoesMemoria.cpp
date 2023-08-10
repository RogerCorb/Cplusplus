#include <iostream>

/*Relembrando, uma variável é global quando ela for declarada FORA de qualquer função do código*/
int VarGlobalNaoInicializada;//<----Alocada no .bss Segmento de dados não inicializados
int VarGlobalInicializada = 10;//<----Alocada no Segmento de dados inicializados(.data) 
static int VarGlobalStaticNaoIncializada;//<----Alocada no.bss Segmento de dados não inicializados
static int VarGlobalStaticInicializada = 5;//<----Alocada no Segmento de dados inicializados(.data) 
int* PonteiroGlobalNaoInicializado;//<----Alocada no .bss Segmento de dados não inicializados
int* PonteiroGlobalInciizado = &VarGlobalInicializada;//<----Alocada no Segmento de dados inicializados(.data) 
/*Observe que este acima são ponteiros globais e por isso estarão em .bss ou .data segment*/

class Casa 
{
public:
	int NumnQuartos;
	float Tamanho;
	bool bTemSuite;
	/* Criamos a classe Casa o molde para objetos usarem os atributos dessa classe estão
	declaradas como publicase isto não está certo, correto em relação aos atributos de uma
	class é que eles devem sempre ser declarados como PRIVATE e seus valores só podem ser
	modificados por algum método Set da class ex: void SetMostrarTamanho(); */
	float MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
};

/*Agora temos uma função que é a função principal main(). O que for declarada dentro dela 
será uma variável local a esta função main. Mais atenção! new Casa() está criando 
dinâmicamente um objeto e por isso este objeto vai ficar na região de memória onde 
residem os recursos alocados dinâmicamente que é a HEAP*/
int main()
{
	int VarLocal = 20;//<---Estará na stack dentro da STACK FRAME da função main
	int* PonteiroLocal = &VarLocal;//<---Estará na stack dentro da STACK FRAME da função main
	
	/*Aqui criamos um objeto na Stack e um ponteiro do tipo Casa de nome CaseDePraiaStack.
	Então CaseDePraiaStack irá apontar para um objeto criado na STACK que teve como molde
	a classe Casa. É muito comum achar que CasaDePraiaStack seja o objeto. 
	Não é! ele apenas é um  ponteiro para um objeto do tipo da classe Casa que será 
	alocado neste caso na STACK*/
	Casa CaseDePraiaStack;

	/*Aqui  CasaDePraia é um ponteiro local a função main e portanto estará aramazenado na stack dentro da stack frama da função main(). Este ponteiro CasaDePraia irá apontar para um objeto criado dinâmicamente (new Casa()) e que portanto este objeto estará na Heap*/
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
	/* Aqui apenas desta variável estar dentro de uma função ela estará armazenada
	na região de memória data segment(Segmento de dados inicializados(.data)). Elafoi
	delcarada como static, logo apos o método ser executado esta vairável aramzena o valor
	incrementado ++ em seu inteiror, se chamarmos este metodo novamente a variavel 
	será incrementada em de novo , contando dessa forma as vezes qu este método foi 
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