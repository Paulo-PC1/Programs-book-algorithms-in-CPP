#include <iostream>

int main(void)
{
    int32_t n, r;

    std::cout << "Entre um valor positivo ou negativo para a variavel <N>: " << std::endl;
    std::cin >> n;
    std::cin.ignore(80, '\n');

    if(n <= 0)
       r = n * -1;

    std::cout << "Valor da Variavel <N> sendo um positivo: " << std::endl;
    std::cout << r;

    std::cout << std::endl;
    std::cout << "Tecle <ENTER> para encerrar....";
    std::cin.get();
    return 0;
}
