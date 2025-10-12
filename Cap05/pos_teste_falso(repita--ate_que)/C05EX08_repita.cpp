#include <iostream>
#include <print>
#include <ciso646>

int main(void)
{
    int32_t b = 3, r = 1;
    size_t i = 0;

    std::println("Potencias de base 3 com expoente variado de 0 a 15");

    do
    {
        r *= b;
        if (i == 0 )
            r = 1;
        if(i == 1 )
            r = b;
        ++i;
        std::println("{}", r);
    }
    while(not(i > 15));


    std::println("");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();

    return 0;
}
