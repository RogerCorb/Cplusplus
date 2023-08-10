#include <iostream>
#include <limits>

const auto MaxIgnorado = std::numeric_limits<std::streamsize>::max();
//std::streamsize �  o n�mero de caracteres transferidos em uma opera��o de E/S
//std::numeric_limits Retorna o valor finito m�ximo represent�vel pelo tipo num�rico

int main()
{
    int num = 0;
    bool feito = false;

    std::cout << "\n\n";
    std::cout << "\tInsira somentes digitos inteiros C++";
    std::cout << "\n\n";

    while (!feito)
    {

        std::cout << "\n";
        std::cout << "\tEntre com um inteiro: ";

        /*Quando std::cin encontra uma entrada que n�o pode ler corretamente na vari�vel
        especificada (como inserir um caractere em uma vari�vel inteira), ele entra
        em estado de erro e deixa a entrada em seu buffer.
        aqui temos num do tipo inteiro int num = 0
        if (std::cin >> num) ir� retornar verdadeiro se for digitado um n�mero inteiro e falso
        caso contr�rio */

        if (std::cin >> num)
        {
            //se entrou aqui � porque num � um inteiro
            std::cout << "\n";
            std::cout << "\tExcelente vc entrou com numero inteiro.: " << num;
            feito = true;
        }
        else
        {
            //se entrou aqui � porque num N�O � um inteiro
            std::cout << "\n";
            std::cout << "\tEntrada Invalida!\n";
            //� preciso liberar a mem�ria(buffer) da entrada e isso � feito abaixo
            std::cin.clear();
            std::cin.ignore(MaxIgnorado, '\n');
        }
    }
    std::cout << "\n\n";
    std::cout << "\tFim do Programa";
    std::cout << "\n\n";
}