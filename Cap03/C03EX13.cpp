 //C03EX13.CPP

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

    r = ((pow(a, 2)) + (pow(b, 2)) + (pow(c, 2)));

    cout << "Resuldado da soma dos quadrados:" << r << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;

 }
