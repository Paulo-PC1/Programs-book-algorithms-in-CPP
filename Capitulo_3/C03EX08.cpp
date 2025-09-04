 //C03EX08.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float v, c, l ,a;

     cout << "Entre valor do comprimento: "; cin >> c;
     cin.ignore(80, '\n');

     cout << "Entre valor da largura....: "; cin >> l;
     cin.ignore(80, '\n');

     cout << "Entre valor da altura.....: "; cin >> a;
     cin.ignore(80, '\n');

     v = c * l * a;

     cout << "Volume da caixa retangular: " << v << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
