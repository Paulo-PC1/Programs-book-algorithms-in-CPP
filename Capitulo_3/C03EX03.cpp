 // C03EX03.CPP

 #include <iostream>
 #include <cmath>

 using namespace std;

 const float PI = 3.14159;

 int main(void)
 {
    float Volume, R, Altura;

    cout << "Entre valor para <Altura>: "; cin >> Altura;
    cin.ignore(80, '\n');

    cout << "Entre valor para <R>: "; cin >> R;
    cin.ignore(80, '\n');

    Volume = PI * pow(R, 2) * Altura;

    cout << "Volume:" << Volume << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
 }
