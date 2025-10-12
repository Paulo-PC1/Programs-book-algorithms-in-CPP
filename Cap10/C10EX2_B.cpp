#include <iostream>
#include <print>

//rotina de encerramento do programa
void pausa(void)
{
    std::println(" ");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();

}
//sub-rotina calculo somatorio 1+2+3+4... até N onde N é indicado pelo usuario
void calculo(uint64_t valor)
{
    uint64_t soma = 0;
    for(size_t i = 1; i <= valor; ++i)
        soma += i ;
    std::print("somatorio nos numeros de \'1\' ate {} = {} ", valor, soma);
}
//rotina principal do programa
int main(void)
{
    uint64_t n;

    std::print("Entre um valor numerico: ");
    std::cin >> n;
    std::cin.ignore(80, '\n');

    calculo(n);
    pausa();

    return 0;
}
