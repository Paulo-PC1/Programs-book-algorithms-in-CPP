#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int32_t r;

    for( int32_t i = 15; i <= 200; ++i){ // para fim para
        r = pow(i, 2);
        cout << "Valor ao quadrado: " << r << endl;
    }

    cout << endl;
    cout << "Tecle <Enter> para encerar...";
    cin.get();
    return 0;
}
