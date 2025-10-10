 //C03EX01

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float F, C;

     cout << "Entre Temperatura em Graus Celscius <C>: " ; cin >> C;
     cin.ignore(80, '\n');

     F = C * 9 / 5 + 32;

     cout << "Temperatura em Fahrenheit :" << F << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
