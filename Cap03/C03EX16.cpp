 //C03EX16.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     float sm, pr, ns;

     cout << "Entre valor do salario mensal ........:"; cin >> sm;
     cin.ignore(80, '\n');

     cout << "Entre valor do percentual de reajuste(%) :"; cin >> pr;
     cin.ignore(80, '\n');

     ns = sm + (sm * pr / 100);

     cout << "Valor do salario reajustado: " << ns << endl;

     cout << endl;
     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
