 //C03EX10.CPP

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main(void)
 {
     int16_t a, b, x;

     cout << "Entre valor para <A>: "; cin >> a;
     cin.ignore(80, '\n');

     cout << "Entre valor para <B>: "; cin >> b;
     cin.ignore(80, '\n');

     x = pow((a - b), 2);

     cout << "Resultado: " << x << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
