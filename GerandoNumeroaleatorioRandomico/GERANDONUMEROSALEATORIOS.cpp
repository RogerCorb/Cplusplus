#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() 
{
    int Arrayrandomnumber[11]; // declaramos um vetor de 0 a 10 posiçoes
    srand((unsigned)time(0));
    int randomNumber;

    for (int index = 0; index < 10; index++)
    {
        
        Arrayrandomnumber[index]= randomNumber = (rand() % 55) + 1;
        cout << Arrayrandomnumber[index] << endl;
    }
    system("PAUSE");
}