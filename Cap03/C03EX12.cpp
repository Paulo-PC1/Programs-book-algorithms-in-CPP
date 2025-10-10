 //C03EX12.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float real, dolar, cota;

     cout << "Escreva valor em real que possui: "; cin >> real;
     cin.ignore(80, '\n');

     cout << "Escreva valor da cotacao do real: "; cin >> cota;
     cin.ignore(80, '\n');

     dolar = real / cota;

     cout << "Real em Dolar...........: " << dolar << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar....";
     cin.get();
     return 0;
 }
