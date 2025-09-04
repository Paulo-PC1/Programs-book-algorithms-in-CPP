 //C03EX17.CPP

 #include <iostream>
 #include <cmath>

 using namespace std;

 const float pi = 3.14159265; // #define pi 3.14159265

 int main(void)
{
    float a, r;

    cout << "Entre o raio da circunferencia: ";
    cin >> r;
    cin.ignore(80, '\n');

    a = pi * pow(r, 2);

    cout << "Area da circunferencia: " << a << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
 }


