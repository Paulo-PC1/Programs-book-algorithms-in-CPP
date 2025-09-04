#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t a, r;

    cout << "Entre valor para <A>: ";
    cin >> a;
    cin.ignore(80, '\n');

    r = pow(a, 2);

    if(r > 30)
        cout << "Resultado: " << r;
    else
        cout << "Resultado menor que 30";

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;

}
