#include <iostream>

using namespace std;

int main(void)
{
    int32_t valor, r;

    cout << "Entre um valor numerico: ";
    cin >> valor;
    cin.ignore(80, '\n');

    r = valor % 2;

    if(r == 0)
        cout << "Valor: " << valor << " e um numero par!";
    else
        cout << "Valor: " << valor << " e um numero impar!";

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;
}
