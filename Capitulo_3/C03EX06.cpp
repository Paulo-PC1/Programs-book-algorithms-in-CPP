 //C03EX06.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     int16_t A, B, X;

     cout << "Entre valor para variavel <A>: "; cin >> A;
     cin.ignore(80, '\n');

     cout << "Entre valor para variavel <B>: "; cin >> B;
     cin.ignore(80, '\n');

     X = A;
     A = B;
     B = X;

     cout << "Valor <A>: " << A << endl;
     cout << "Valor <B>: " << B << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
