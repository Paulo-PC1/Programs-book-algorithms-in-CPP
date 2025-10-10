 // C03EX07.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     int16_t a, b, c, d;
     int16_t x1, x2, x3, x4, x5, x6;
     int16_t y1 ,y2, y3, y4, y5, y6;

     cout << "Entre valor para <A>"; cin >> a;
     cin.ignore(80, '\n');

     cout << "Entre valor para <B>"; cin >> b;
     cin.ignore(80, '\n');

     cout << "Entre valor para <C>"; cin >> c;
     cin.ignore(80, '\n');

     cout << "Entre valor para <D>"; cin >> d;
     cin.ignore(80, '\n');

     x1 = a + b;
     x2 = a + c;
     x3 = a + d;
     x4 = b + c;
     x5 = b + d;
     x6 = c + d;
     y1 = a * b;
     y2 = a * c;
     y3 = a * d;
     y4 = b * c;
     y5 = b * d;
     y6 = c * d;


     cout << "Resultados das Adicoes :" << endl;
     cout << x1 << endl;
     cout << x2 << endl;
     cout << x3 << endl;
     cout << x4 << endl;
     cout << x5 << endl;
     cout << x6 << endl;
     cout << endl;

     cout << "Resultados das Multiplicacoes :" << endl;
     cout << y1 << endl;
     cout << y2 << endl;
     cout << y3 << endl;
     cout << y4 << endl;
     cout << y5 << endl;
     cout << y6 << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;

 }
