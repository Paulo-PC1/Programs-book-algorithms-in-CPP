 //C03EX15.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     int32_t a, b , c , d , p , s;

     cout << "Entre valor para <A>:"; cin >> a;
     cin.ignore(80, '\n');

     cout << "Entre valor para <B>:"; cin >> b;
     cin.ignore(80, '\n');

     cout << "Entre valor para <C>:"; cin >> c;
     cin.ignore(80, '\n');

     cout << "Entre valor para <D>:"; cin >> d;
     cin.ignore(80, '\n');

     p = a * c;
     s = b + d;

     cout << "Produto do 1o valor com o 3o valor: " << p << endl;
     cout << "Soma do 2o valor com o 4o valor...: " << s << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
