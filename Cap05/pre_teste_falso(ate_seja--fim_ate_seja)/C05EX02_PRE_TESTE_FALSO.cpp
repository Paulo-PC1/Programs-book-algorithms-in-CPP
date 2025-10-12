#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
    int32_t a, r;
    size_t i = 1;

    cout << "Entre um valor para ser multiplicado: ";
    cin >> a;
    cin.ignore(80, '\n');

    while(not( i > 10))
    {
        r = i * a;
        cout << i << " x " << a  << " = " << r << endl;
        i++;
    }

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;
}

