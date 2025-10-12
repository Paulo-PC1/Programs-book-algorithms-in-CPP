#include <iostream>

using namespace std;

int main(void)
{
    int32_t r, a;
    size_t i = 1;

    cout << "Entre um valor para ser multiplicado: ";
    cin >> a;
    cin.ignore(80, '\n');

    do
    {
        r = i * a;
        cout << i << " x " << a  << " = " << r << endl;
        i++;
    }

    while(i <= 10);

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;
}

