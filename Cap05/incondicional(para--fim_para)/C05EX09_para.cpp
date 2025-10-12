#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
    int64_t ANTERIOR = 0, ATUAL = 1, PROXIMO;

    cout << "Sequencia de Fibonacci ate o 15o. termo: " << endl;
    cout << ANTERIOR << " " << ATUAL;

    for(size_t i = 3; i <= 15; ++i)
    {
        PROXIMO = ATUAL + ANTERIOR;
        cout << " " << PROXIMO;
        ANTERIOR = ATUAL;
        ATUAL = PROXIMO;
    }

    cout << endl << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
