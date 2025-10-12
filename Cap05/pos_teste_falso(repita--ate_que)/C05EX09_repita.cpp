#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
    int64_t ANTERIOR = 0, ATUAL = 1, PROXIMO;

    cout << "Sequencia de Fibonacci ate o 15o. termo: " << endl;
    cout << ANTERIOR << " " << ATUAL;

    size_t i = 3;
    do
    {
        PROXIMO = ATUAL + ANTERIOR;  // F(n) = F(n-1) + F(n-2)
        cout << " " << PROXIMO;
        ANTERIOR = ATUAL;
        ATUAL = PROXIMO;
        ++i;
    }
    while (not(i > 15));

    cout << endl << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
