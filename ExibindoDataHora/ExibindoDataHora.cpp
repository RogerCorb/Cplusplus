#define _CRT_SECURE_NO_WARNINGS // Usamo isso para o sistema nao dar mensagm de 
#include <iostream>           // de seguran�a pois estamos usamdo fun�oes antigas
#include <ctime>             // profissionalmente n�o devemos fazer isso 

int main()
{
	//O tipo de dados time_t � usado para representar o tempo de calend�rio.
	time_t HoraAtual = time(0);

	/*Fun��o localtime
	 recebe tempo em segundos de uma vari�vel do tipo time_t, converte para o tempo local, armazena os dados na struct e retorna um ponteiro para uma struct do tipo tm com os dados locais.*/
	tm* MinhaHora = localtime(&HoraAtual);
	/*ERRATA: n�o � necess�rio colocar 1 + para hora, minuto e segundo*/
	std::cout << "\nHora: " << MinhaHora->tm_hour << ":" << MinhaHora->tm_min << ":" << MinhaHora->tm_sec;
	std::cout << "\nDia: " << MinhaHora->tm_mday;
	/*O hor�rio de ver�o acabou logo n�o coloque mais 1 +*/
	std::cout << "\nMes: " << 1 + MinhaHora->tm_mon;
	std::cout << "\nAno " << 1900 + MinhaHora->tm_year << "\n";
	//pressione enter duas vezes bem r�pido para ver os resultados sincronizados
	system("DATE");
	system("TIME");
	system("PAUSE");

	return 0;
}