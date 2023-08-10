#pragma once
#include <iostream>
#include <string>

// Este é o aquivo header.h "Cabeçalho" é a nossa 
// Biblioteca de classes e funções 
// que serão utilizadas em nossa programa
// teremos o aquivo co

class Conta
{
 private: 
  std::string Banco;
  int Agencia{ 0 };
  int NumConta{ 0 };
  std::string Titular;
  double Saldo{ 0.0f };
 public:
	 bool Sacar(double Valor);
	 void Depositar(double Valor);
	 void Transferir(Conta &Destino, double Valor);
	 double ConsultarSaldo();
     std::string GetBanco();
	 int GetAgencia();
	 int GetNumConta();
	 std::string GetTitular();
	 void GetEnderecothis();
	 void SetBanco(std::string Banco);
	 void SetAgencia(int Agencia);
	 void SetTitular(std::string Titular);
	 void SetNumConta(int NumConta);
};