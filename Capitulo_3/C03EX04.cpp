 // C03EX04.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
      float d, t, v, l;

      cout << "Entre Valor para Tempo: "; cin >> t;
      cin.ignore(80, '\n');

      cout << "Entre valor para Velocidade: "; cin >> v;
      cin.ignore(80, '\n');

      d = t * v;
      l = d / 12;

      cout << "Valor da Velocidade ...:" << v << endl;
      cout << "Valor da Tempo........ :" << t << endl;
      cout << "Valor da Distancia ....:" << d << endl;
      cout << "Valor de Litros Usados :" << l << endl;


      cout << endl;
      cout << "Tecle <Enter> para encerrar...";
      cin.get();
      return 0;
 }
