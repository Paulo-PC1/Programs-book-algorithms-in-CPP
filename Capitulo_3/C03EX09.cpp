 // C02EX03.CPP

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main(void)
 {
    int16_t a;

    cout << "Entre valor para <A>: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Resultado: " << (pow(a, 2)) << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
     return 0;
 }
