#include <iostream>

int main(void)
{
    float F, C = 10;
    size_t i = 1;

    std::cout << "Valores em Celcius convertido para Fahrenheit de 0 a 100." << std::endl;

    while(i <= 10)
    {
        F = C * 9 / 5 + 32;
        std::cout << "Valor em Fahrenheit: " << F << std::endl;
        ++i;
        C += 10;
    }

    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();

    return 0;
}
