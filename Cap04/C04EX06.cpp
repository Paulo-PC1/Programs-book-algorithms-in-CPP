#include <iostream>

int main(void)
{
    int32_t a, b, c, x;

    std::cout << "Entre valor para a variavel <A>: ";
    std::cin >> a;
    std::cin.ignore(80, '\n');

    std::cout << "Entre valor para a variavel <B>: ";
    std::cin >> b;
    std::cin.ignore(80, '\n');

    std::cout << "Entre valor para a variavel <C>: ";
    std::cin >> c;
    std::cin.ignore(80, '\n');

    if( a > b)
    {
        x = a;
        a = b;
        b = x;
    }
    if(a > c)
    {
        x = a;
        a = c;
        c = x;
    }
    if(b > c)
    {
        x = b;
        b = c;
        c = x;
    }

    std::cout << std::endl;

    std::cout << "Apresentacao dos valores dispostos em ordem crescente: ";
    std::cout << "<A> = " << a << ", <B> = " << b << ", <C> = " << c << std::endl;

    std::cout << std::endl;
    std::cout << "Tecle <ENTER> para encerrar....";
    std::cin.get();
    return 0;
}

