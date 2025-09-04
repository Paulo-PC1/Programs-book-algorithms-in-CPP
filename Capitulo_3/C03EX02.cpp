 // C03EX02.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float C, F;

     cout << "Escreva Temperatura em Fahrenheit: "; cin >> F;
     cin.ignore(80, '\n');

     C = ((F - 32) * 5) / 9;

     cout << "Temperatura em Celcius :" << C << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
