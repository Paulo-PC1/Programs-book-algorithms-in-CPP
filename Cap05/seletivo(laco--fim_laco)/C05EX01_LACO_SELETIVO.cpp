#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t r;
    int32_t i = 15;

    while (true) // simulacao do laco seletivo laco fim laco
    {
        if(i > 200)
            break;

        r = pow(i, 2);
        cout << "Valor ao quadrado: " << r << endl;
        i++;
    }

    cout << endl;
    cout << "Tecle <Enter> para encerar...";
    cin.get();
    return 0;


}

