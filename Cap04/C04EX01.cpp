 // C04EX01.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     int32_t a, b, r;

     cout << "Entre valor <A>: "; cin >> a;
     cin.ignore(80, '\n');

     cout << "Entre valor <B>: "; cin >> b;
     cin.ignore(80, '\n');

     if ( a > b)
        r = a - b;
     else
        r = b -a;

     cout << "Resultado: " << r << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
