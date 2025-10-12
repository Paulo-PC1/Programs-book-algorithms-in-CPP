#include <iostream>
#include <print>

//rotina de pausa do programa
void pausa(void)
{
    std::println("");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();
}

//rotina par ou impar
void ParImpar(int32_t numero)
{
    int32_t r;


    r = numero - 2 * (numero / 2); //calculo para verificacao de numero par (mesma coisa que r = n % 2)
    if(r == 0)
        std::print("Numero {} e par!", numero);
    else
        std::print("Numero {} e impar!", numero);
}

//rotina pirncipal do programa
int main(void)
{
    int32_t numero;

    std::println("Programa verificacao Par ou Impar.");
    std::print("Entre um valor numerico: "); std::cin >> numero;
    std::cin.ignore(80, '\n');

    ParImpar(numero);
    pausa();

    return 0;
}
