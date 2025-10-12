#include <iostream>

using namespace std;

int main(void)
{
    int32_t s = 0;

    for(size_t i = 1; i <= 100; ++i)
    {
        s += i;
    }

    cout << "Soma dos 100 primeiros numeros naturais: "<< s;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
