#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, r;

    cout << "Entre um valor para ser multiplicado: ";
    cin >> a;
    cin.ignore(80, '\n');

    for(size_t i = 1; i <= 10; ++i)
    {
        r = a * i;
        cout << i << " x " << a  << " = " << r << endl;
    }

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();
}
