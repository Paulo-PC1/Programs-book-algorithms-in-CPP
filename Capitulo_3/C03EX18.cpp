 //C03EX18.CPP

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     int32_t a, b ,c, tot_e, nulo, w;
     double perc_e, perc_a, perc_b, perc_c, perc_w;

     cout << setprecision (2) << right << fixed;

     cout << "Entre votos candidato <A>: ";
     cin >> a;
     cin.ignore(80, '\n');

     cout << "Entre votos candidato <B>: ";
     cin >> b;
     cin.ignore(80, '\n');

     cout << "Entre votos candidato <C>: ";
     cin >> c;
     cin.ignore(80, '\n');

     cout << "Entre votos em branco: ";
     cin >> w;
     cin.ignore(80, '\n');

     cout << "Entre votos nulos: ";
     cin >> nulo;
     cin.ignore(80, '\n');

     cout << endl;

     tot_e = a + b + c + w + nulo;
     perc_e = ((a + b + c + w) / (float) tot_e) * 100; // "transforma a variavel tot_e de int pra float para calcular a porcentagem
     perc_a = ((a) / (float) tot_e) * 100;
     perc_b = ((b) / (float) tot_e) * 100;
     perc_c = ((c) / (float) tot_e) * 100;
     perc_w = ((w) / (float) tot_e) * 100;


     cout << "Total de votos .................................... : " << tot_e << endl;
     cout << "Porcentagem de votos  validos realizados( %) ....: " << setw(8) << perc_e << endl;
     cout << "Porcentagem de votos do candidato A (%) ........ : " << setw(8) << perc_a << endl;
     cout << "Porcentagem de votos do candidato B (%) ........ : " << setw(8) << perc_b << endl;
     cout << "Porcentagem de votos do candidato C (%) ........ : " << setw(8) << perc_c << endl;
     cout << "Porcentagem de votos em branco (%) ............. : " << setw(8) << perc_w << endl;

     cout << endl;

     cout << "Tecle <Enter> para encerrar...";
     cin.get();
     return 0;
 }
