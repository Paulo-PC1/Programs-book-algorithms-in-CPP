#include <iostream>

using namespace std;

int main(void)
{
    int32_t r, a;
    size_t i = 1;

    cout << "Entre um valor para ser multiplicado: ";
    cin >> a;
    cin.ignore(80, '\n');

    while(true)
    {
        if(i > 10)
            break;

        r = i * a;
        cout << i << " x " << a  << " = " << r << endl;
        i++;

    }

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
