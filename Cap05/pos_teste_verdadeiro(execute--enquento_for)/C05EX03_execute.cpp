#include <iostream>

using namespace std;

int main(void)
{
    size_t i = 1;
    int32_t s = 0;

    do
    {
        s += i;
        i++;
    }
    while(i <= 100);

    cout << "Soma dos 100 primeiros numeros naturais: "<< s;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
