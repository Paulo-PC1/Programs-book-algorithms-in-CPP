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
    float PREST, *PPREST = &PREST;
    *PPREST = value + (value * (tax / 100) * time);
    std::println("Valor da prestacao: {:8.2f}", *PPREST);
}
int main(void)
{
    float VALOR, *PVALOR = &VALOR, TAXA, *PTAXA = &TAXA, TEMPO, *PTEMPO = &TEMPO;



    std::print("Entre o valor da compra: ");
    std::cin >> *PVALOR; // podendo capturar o dado via ponteiro ou via variavel normal
    std::cin.ignore(80, '\n');
    std::println(" ");

    std::print("Entre o valor da taxa: ");
    std::cin >> *PTAXA; // podendo capturar o dado via ponteiro ou via variavel normal
    std::cin.ignore(80, '\n');
    std::println(" ");

    std::print("Entre o valor do tempo: ");
    std::cin >> *PTEMPO; // podendo capturar o dado via ponteiro ou via variavel normal
    std::cin.ignore(80, '\n');
    std::println(" ");

    prestacao(*PVALOR, *PTAXA, *PTEMPO); // podendo ou usar a variavel ou o ponteiro para passar o valor
    pausa();

    return 0;
}
