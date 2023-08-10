#include <iostream>
#include <limits>

const auto MaxIgnorado = std::numeric_limits<std::streamsize>::max();
//std::streamsize é  o número de caracteres transferidos em uma operação de E/S
//std::numeric_limits Retorna o valor finito máximo representável pelo tipo numérico

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

        /*Quando std::cin encontra uma entrada que não pode ler corretamente na variável
        especificada (como inserir um caractere em uma variável inteira), ele entra
        em estado de erro e deixa a entrada em seu buffer.
        aqui temos num do tipo inteiro int num = 0
        if (std::cin >> num) irá retornar verdadeiro se for digitado um número inteiro e falso
        caso contrário */

        if (std::cin >> num)
        {
            //se entrou aqui é porque num é um inteiro
            std::cout << "\n";
            std::cout << "\tExcelente vc entrou com numero inteiro.: " << num;
            feito = true;
        }
        else
        {
            //se entrou aqui é porque num NÃO é um inteiro
            std::cout << "\n";
            std::cout << "\tEntrada Invalida!\n";
            //é preciso liberar a memória(buffer) da entrada e isso é feito abaixo
            std::cin.clear();
            std::cin.ignore(MaxIgnorado, '\n');
        }
    }
    std::cout << "\n\n";
    std::cout << "\tFim do Programa";
    std::cout << "\n\n";
}