#include <iostream>
#include <string>
#include <tchar.h>
using namespace std;

int main()
{
    /*_tsetlocale(LC_ALL, "portuguese");*/
    bool bSol, bCrroPronto, bSalariook;
    bool bAcesso;
    bSol = bCrroPronto = bSalariook = true;
    string SenhadeAcesso = "cmaismais";
    string SenhaDigitada;
    cout << "Digite a senha de acesso--> ";
    cin >> SenhaDigitada;
    if (SenhaDigitada == SenhadeAcesso) 
    {
        cout << "\n Acesso Permitido !\n";
        bAcesso = true;
        system("PAUSE");
    } else {
        cout << "Acesso negado ! \n";
        system("PAUSE");
        exit(0);
    }
    if (bAcesso) 

    {
        if (bSol && bCrroPronto && bSalariook) 
        {
            cout << "Vai dar Praia !!!.. \n";
        } else {
            cout << "Não Vai dar Praia !!! \n";
        }
        
    }

    system("PAUSE");
    return 0;
}