#include <iostream>
#include <ciso646>

void pausa(void)
{
    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();
}

void divisivel(int32_t valor)
{
     int32_t resultado2;
     int32_t resultado3;

     resultado2 = valor - 2 *(valor / 2);
     resultado3 = valor - 3 *(valor / 3);

     if(resultado2 != 0 and resultado3 != 0)
        std::cout << "Este valor nao divisivel por 2 e 3";
     else
        std::cout << "Valor Invalido";

}

int main(void)
{
    int32_t valor;

    std::cout << "Programa verificacao de valores divisiveis por 2 e 3" << std::endl;
    std::cout << "Entre valor: "; std::cin >> valor;
    std::cin.ignore(80, '\n');

    divisivel(valor);
    pausa();

    return 0;
}
