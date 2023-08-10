#include <iostream>
//#include <cmatch> // função matematica potencia "pow()" usa esta biblioteca
#include "FuncoesMenu.h"
using namespace std;

// aqui é onde escrevemos as funções que estão sinalizadas no arquivo FuncoesMenu.h
//aqui de fato escrevemos os códigos delas dizemos que é aonde elas são iplementadas. 
// Este aquivo cpp tem o mesmo nome de FuncoesMenu.h

bool isPar(int num) {
	if (num % 2 == 0)
	{
		return true;
	}
	return false;
}

//Funcao calculadora usando o switch/case 
double Soma(char Operacao, double Num1, double Num2)
{
	switch (Operacao)
	{
	case '+': return Num1 + Num2;
	case '-': return Num1 - Num2;
	case '*': return Num1 * Num2;
	case '/': return Num1 / Num2;
	default: std::cout << "\n Operador Invalido";
		break;
	}
	return 0;
}



// Função que soma um numero com virgula
float soma(float num1, float num2)
{
	return num1 + num2;
}

float subtracao(float num1, float num2)
{
	return num1 - num2;
}

float multiplicacao(float num1, float num2)
{
	return num1 * num2;
}
float divisao(int num1, int num2)
{
	return (float)num1 / (float)num2; // Convertemos um numero inteiro em float essa técnica é 
	// chamada cast
}

float potencia(int num1, int num2)
{
	return pow(num1, num2); // pow eleva a base ao expoente
}

float raizquadrada(int num1, num2)
{
	return sqrt(num1); // sqrt retorna a raiz quadrada de um numero 
}

// Função que soma um numero inteiro
int SomaAUmNumero(int Numero, int Numeroasersomado)
{
	return Numero + Numeroasersomado;
}

void Mensagem()
{
	cout << "\n Mensagem de marte ! Chegamos bem !!!";
}

char Verifica(char VCont) {
	return VCont;
}


double EntradaCalculadora() {
	double num1,num2;
	char opcao;
	cout << "\n Digite o primeiro numero .:";
	cin >> num1;
	cout << "\n Digite o segundo numero .:";
	cin >> num2;
	cout << "\n Digite a sua operacao +Soma -Subtracao *multiplicacao /Divisao.:";
	cin >> opcao;
	return SaidaCalculadora(opcao, num1, num2); 
}

double SaidaCalculadora(char opcao,double num1,double num2) {

	switch (opcao) {
	case '+':cout << "\n Soma.:" << (num1 + num2) << "\n";
		return num1 + num2;
	case '-':cout << "\n Subtracao.: " << (num1 - num2) << "\n";
		return num1 - num2;
	case '*':cout << "\n Multiplicacao.: " << (num1 * num2) << "\n";
		return num1 * num2;
	case '/':cout << "\n Divisao .:" << (num1 / num2) << "\n";
		return num1 / num2;
	default: std::cout << "\n Operador Invalido" << "\n";
		break;
	}
	return 0;
}