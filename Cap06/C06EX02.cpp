 #include <iostream>
 #include <array>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     array<int32_t, 8> a, b;
     size_t i;

     cout << "Entre valores 8 valores inteiros." << endl;
     cout << endl;

     for (i = 0; i < a.size(); ++i){
        cout << "Entre o " << setw(2) << i + 1;
        cout << "o. valor: ";
        cin >> a[i];
     }
     for (i = 0; i < a.size(); ++i){
        b[i] = a[i] * 3;
     }
     cout << endl;

     cout << "Valores Multiplicados por 3:" << endl;

     for (i = 0; i < b.size(); ++i){
        cout << setw(2) << i + 1 << "o." << b[i] << endl;
     }
     cout << endl;
     cout << "Tecle <ENTER> para encerrar...";
     cin.get();
     return 0;
 }
