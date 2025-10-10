 // C03EX04.CPP

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
      float d, t, v, l;

      cout << setprecision(2) << fixed << right;

      cout << "Entre Valor para Tempo: "; cin >> t;
      cin.ignore(80, '\n');

      cout << "Entre valor para Velocidade: "; cin >> v;
      cin.ignore(80, '\n');

      d = t * v;
      l = d / 12;

      cout << "Valor da Velocidade ...:" << setw(8) << v << endl;
      cout << "Valor da Tempo........ :" << setw(8) << t << endl;
      cout << "Valor da Distancia ....:" << setw(8) << d << endl;
      cout << "Valor de Litros Usados :" << setw(8) << l << endl;


      cout << endl;
      cout << "Tecle <Enter> para encerrar...";
      cin.get();
      return 0;
 }
