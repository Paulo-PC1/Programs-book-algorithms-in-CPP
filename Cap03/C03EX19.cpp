 //C03EX19.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float a, b, r1, r2, r3, r4;

     cout << "Entre valor para <A>:";
     cin >> a;
     cin.ignore(80, '\n');

     cout << "Entre valor para <B>";
     cin >> b;
     cin.ignore(80, '\n');

     r1 = a + b;
     r2 = a - b;
     r3 = a * b;
     r4 = a / b;

     cout << "Soma .........: " << r1 << endl;
     cout << "Subtracao ....: " << r2 << endl;
     cout << "Multiplicacao : " << r3 << endl;
     cout << "Divisao ......: " << r4 << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
