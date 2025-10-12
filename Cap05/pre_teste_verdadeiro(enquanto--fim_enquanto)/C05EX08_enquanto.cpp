#include <iostream>
#include <print>

int main(void)
{
    int32_t b = 3, r = 1;
    size_t i = 0;

    std::println("Potencias de base 3 com expoente variado de 0 a 15");

    while(i <= 15)
    {
        r *= b;
        if (i == 0 )
            r = 1;
        if(i == 1 )
            r = b;
        ++i;
    std::println("{}", r);
    }

    std::println("");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();

    return 0;
}
