#include <iostream>
#include <iomanip>

int main(void)
{
    float n1, n2, n3, n4, md;

    std::cout << std::setprecision(2) << std::fixed << std::right;

    std::cout << "Entre as médias do aluno: " << std::endl;

    std::cout << "Entre o valor da nota 1:";
    std::cin >> n1;
    std::cin.ignore(80, '\n');

    std::cout << "Entre o valor da nota 2:";
    std::cin >> n2;
    std::cin.ignore(80, '\n');

    std::cout << "Entre o valor da nota 3:";
    std::cin >> n3;
    std::cin.ignore(80, '\n');

    std::cout << "Entre o valor da nota 4:";
    std::cin >> n4;
    std::cin.ignore(80, '\n');

    md = (n1 + n2 + n3 + n4) / 4;

    std::cout << std::endl;

    if(md >= 5)
        std::cout << "Aprovado!!" << std::endl;
    else
        std::cout << "Reprovado!!" << std::endl;

    std::cout << "Media obtida: ";
    std::cout << md;

    std::cout << std::endl;
    std::cout << "Tecle <ENTER> para encerrar....";
    std::cin.get();
    return 0;

}
