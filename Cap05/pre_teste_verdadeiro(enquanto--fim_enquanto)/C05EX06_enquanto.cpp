#include <iostream>

int main(void)
{
    size_t i = 1;
    int32_t r;

    std::cout << "Valores impares na faixa de 0 a 20: " << std::endl;

    while(i <= 20)
    {
        r  = i - 2 * (i / 2);
        if (r != 0)
            std::cout << i << std::endl;
        ++i;
    }

    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();

    return 0;
}
