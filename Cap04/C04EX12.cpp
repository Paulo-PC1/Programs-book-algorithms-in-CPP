#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
    int32_t valor;

    cout << "Entre um valor numerico: ";
    cin >> valor;
    cin.ignore(80, '\n');

    if(not(valor > 3))
        cout << "O valor informado : " << valor;

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;
}
