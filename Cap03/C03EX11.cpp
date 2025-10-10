 //C03EX11.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float real, dolar, cota;

     cout << "Escreva valor em dolar que possui: "; cin >> dolar;
     cin.ignore(80, '\n');

     cout << "Escreva valor da cotacao do dolar: "; cin >> cota;
     cin.ignore(80, '\n');

     real = dolar * cota;

     cout << "Dolar em Real...........: " << real << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar....";
     cin.get();
     return 0;
 }
