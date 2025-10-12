//usei chatGTP pois errei a formula de fibonacci e nao apresentava os valores

#include <iostream>

using namespace std;

int main(void)
{
    int64_t ANTERIOR = 0;   // primeiro termo da sequência
    int64_t ATUAL = 1;      // segundo termo da sequência
    int64_t PROXIMO;

    cout << "Sequencia de Fibonacci ate o 15o. termo: " << endl;
    cout << ANTERIOR << " " << ATUAL;

    size_t contador = 3; // já temos dois termos impressos, então começa do 3º

    while (contador <= 15)
        {
        PROXIMO = ATUAL + ANTERIOR;  // F(n) = F(n-1) + F(n-2)
        cout << " " << PROXIMO;
        ANTERIOR = ATUAL;   // atualiza valores
        ATUAL = PROXIMO;
        ++contador;
    }

    cout << endl << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
