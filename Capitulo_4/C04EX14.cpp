#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, c, r;

    cout << "Entre um Valor para <A>: ";
    cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre um Valor para <B>: ";
    cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre um valor para <C>: ";
    cin >> c;
    cin.ignore(80, '\n');

    r = a + b + c;

    if( r >= 100)
        cout << "Resultado: " << r;
    else
        cout << "Resultado menor que 100";

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;
}
