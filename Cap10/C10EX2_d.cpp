#include <iostream>
#include <print>

//rotina de pausa do programa.
void pausa(void)
{
    std::println("");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();

}
//rotina de calculo de potencia do programa
void potencia(int32_t a, int32_t b)
{
    int32_t resultado = 1;

    for(size_t i = 1; i <= b; ++i){
        resultado *= a;
    }

    std::println("{} elevado a {} = {}", a, b, resultado);
}
//rotina principal do programa
int main(void)
{
    int32_t base, expoente;

    std::println("Programa de Calculo de Potencia.");
    std::println("-----------------------------------");

    std::print("Insira um valor para a base: "); std::cin >> base;
    std::cin.ignore(80, '\n');

    std::print("Insira um valor para o expoente: "); std::cin >> expoente;
    std::cin.ignore(80, '\n');

    potencia(base, expoente);
    pausa();
    return 0;
}
