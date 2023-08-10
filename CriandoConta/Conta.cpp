#include <iostream>
#include <string>
#include "Conta.h"

bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu saldo Atual : RS" << ConsultarSaldo() << "\n";
		return false;
	}
	else {
		Saldo -= Valor;
		std::cout << "Seu Saldo Atual : R$ " << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double Valor) 
{
	Saldo += Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com sucesso!\n";
}

void Conta::Transferir(Conta &Destino, double Valor) 
{
	if (Saldo < Valor) {
		std::cout << "\nSaldo Insuficiente\n";
	}
	else {
		// Aqui Destino é o Objeto da classe conta pois 
		// foi instanciado ali mesmo parâmetro como prâmetro
		// Conta Destino agora é só chamar os metodos
		// da classe que serão em notação .DOT
		Destino.Depositar(Valor);
		Saldo -= Valor;
		std::cout << "\n************ Dados ********\n";
		std::cout << "Titular : " << Destino.GetTitular() << "\n"; 
		std::cout << "Banco   : " << Destino.GetBanco()   << "\n";
		std::cout << "Agencia : " << Destino.GetAgencia() << "\n";
		std::cout << "Conta   : " << Destino.GetNumConta()<< "\n";
		std::cout << "\nTrasferencia Realizada com sucesso !";
		std::cout << "Seu saldo atual :" << ConsultarSaldo()<< "\n";
	}
}

double Conta::ConsultarSaldo() {
	return Saldo;
}

std::string Conta::GetBanco() {
	return Banco;
}
int Conta::GetAgencia() {
	return Agencia;
}
std::string Conta::GetTitular() {
	return Titular;
}
void Conta::GetEnderecothis()
{
	std::cout << "\nThis contem dentro o endereço " << this << "\n";
}
int Conta::GetNumConta() {
	return NumConta;
}
void Conta::SetBanco(std::string Banco) {
	this->Banco = Banco; 
	// Aqui usamos o ponteiro this que poderia ser assim (*this)Banco
	// e por praticidade usamos a flexa, para acessar a variavel 
	// Banco dentro do objeto e mudar o conteudo dela pelo
	// parâmetro Banco do método... A conteudo foi modificado pelo 
	// endereçamento da variavel banco do objeto através de 
	// de ponteiros ! neste caso o this e a conotação -> que 
	// substitui (*this).banco
}
void Conta::SetAgencia(int Agencia) {
	this->Agencia = Agencia;
}
void Conta::SetNumConta(int NumConta) {
	this->NumConta = NumConta;
}
void Conta::SetTitular(std::string Titular) {
	this->Titular = Titular;
}
