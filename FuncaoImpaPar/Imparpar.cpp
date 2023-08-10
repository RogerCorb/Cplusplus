#include <iostream>
using namespace std; 
bool isPar(int Num1);

int main()
{

    int Numentrada=0;
    cout << "Digite um Numero ..: ";
     cin >> Numentrada;
    if (isPar(Numentrada)) {

        cout << " \nO Numero digitado e Par\n";
    } else {
        cout << " \nO Numero digitado e Impar\n";
    }
   
    system("PAUSE");
    return 0;

}



bool isPar(int Num1)
{
    if (Num1%2==0)
    {
      return true;
    }
    else {
        return false;
    }
}
