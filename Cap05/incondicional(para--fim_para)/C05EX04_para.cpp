#include <iostream>

int main(void)
{
    int32_t s = 0;
    int32_t r;

    for(size_t i = 1; i <= 500; ++i)
    {
        r = i - 2 * (i / 2 );
        if(r == 0)
            s += i;
    }

    std::cout << "Somatorio dos numers pares de 1 a 500: " << s;

    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();

    return 0;
}
