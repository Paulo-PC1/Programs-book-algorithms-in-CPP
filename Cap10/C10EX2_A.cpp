#include <iostream>
#include <print>

void pausa(void)
{
    std::println(" ");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();

}

void prestacao (float value, float tax, float time)
{
    float PREST;
    PREST = value + (value * (tax / 100) * time);
    std::println("Valor da prestacao: {}", PREST);
}
int main(void)
{
    float VALOR, TAXA, TEMPO;



    std::print("Entre o valor da compra: ");
    std::cin >> VALOR;
    std::cin.ignore(80, '\n');
    std::println(" ");

    std::print("Entre o valor da taxa: ");
    std::cin >> TAXA;
    std::cin.ignore(80, '\n');
    std::println(" ");

    std::print("Entre o valor do tempo: ");
    std::cin >> TEMPO;
    std::cin.ignore(80, '\n');
    std::println(" ");

    prestacao(VALOR, TAXA, TEMPO);
    pausa();

    return 0;
}
