 //C03EX05.CPP

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     float value, tax, f_price;
     int16_t time;

     cout << setprecision(2) << fixed << right;

     cout << "Entre valor da compra:...."; cin >> value;
     cin.ignore(80, '\n');

     cout << "Entre valor da taxa......: "; cin >> tax;
     cin.ignore(80, '\n');

     cout << "Entre valor de tempo.....: "; cin >> time;
     cin.ignore(80, '\n');

     f_price = value + (value * (tax / 100) * time);

     cout << "Valor da Prestacao.....: "<< setw(8)<< f_price << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
