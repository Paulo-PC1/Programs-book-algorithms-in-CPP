#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
    int32_t a, b, c, d, r2, r3;

    cout << "Entre Valor para a variavel <A>: ";
    cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre Valor para a variavel <B>: ";
    cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre Valor para a variavel <C>: ";
    cin >> c;
    cin.ignore(80, '\n');

    cout << "Entre Valor para a variavel <D>: ";
    cin >> d;
    cin.ignore(80, '\n');

    r2 = a % 2;
    r3 = a % 3;
    if((r2 == 0) or (r3 == 0))
        cout << "Valor: " << a << endl;

    r2 = b % 2;
    r3 = b % 3;
    if((r2 == 0) or (r3 == 0))
        cout << "Valor: " << b << endl;

    r2 = c % 2;
    r3 = c % 3;
    if((r2 == 0) or (r3 == 0))
        cout << "Valor: " << c << endl;

    r2 = d % 2;
    r3 = d % 3;
    if((r2 == 0) or (r3 == 0))
        cout << "Valor: " << d << endl;

    cout << endl;
    cout << "Tecle <ENTER> para encerrar....";
    cin.get();

    return 0;

}
