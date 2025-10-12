#include <iostream>
#include <ciso646>
#include <print>

int main(void)
{
    int32_t r;
    size_t i = 1;

    std::println("Valores numericos divisiveis por 4 e menores que 200: ");

    while(i < 200)
    {
        r = i - 4 * (i / 4);
        if (r == 0)
            std::println("{}", i);;
        ++i;
    }

    std::println("");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();

    return 0;
}
