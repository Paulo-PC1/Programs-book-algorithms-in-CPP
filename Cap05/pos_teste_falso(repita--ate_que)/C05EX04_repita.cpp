#include <iostream>
#include <ciso646>

int main(void)
{
    int32_t s = 0;
    int32_t r;
    size_t i = 1;

    do
    {
        r = i - 2 * (i / 2);
        if(r == 0)
            s += i;
        i++;
    }
    while(not(i > 500));

    std::cout << "Somatorio dos numers pares de 1 a 500: " << s;

    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar...";
    std::cin.get();

    return 0;
}
