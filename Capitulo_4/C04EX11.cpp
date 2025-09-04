#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
    int32_t valor;

    cout << "Entre um valor na faixa de 1 a 9: ";
    cin >> valor;
    cin.ignore(80, '\n');

    if((valor <= 9)and (valor >= 0))
        cout << "O valor " << valor << " esta na faixa permitida";
    else
        cout << "O valor " << valor << " esta fora da faixa permitida";

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;
}

