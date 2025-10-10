 //C03EX14.CPP

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main(void)
 {
     int32_t a, b, c, r;

     cout << "Entre valor <A>: "; cin >> a;
     cin.ignore(80, '\n');

     cout << "entre valor <B>: "; cin >> b;
     cin.ignore(80, '\n');

     cout << "entre valor <C>: "; cin >> c;
     cin.ignore(80, '\n');

     //r = a + b+ c;
     //r = pow(r, 2);

     r = pow((a + b + c), 2);

    cout << "Resuldado do quadrado da soma:" << r << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;

 }



