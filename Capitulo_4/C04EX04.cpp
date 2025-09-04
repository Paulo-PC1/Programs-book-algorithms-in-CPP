 //C04EX04.CPP

 #include <iostream>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     float n1, n2, n3, n4, ne, md1, md2;

     cout << setprecision(2) << fixed << right;

     cout << "Entre valor da nota 1: "; cin >> n1;
     cin.ignore(80, '\n');

     cout << "Entre valor da nota 2: "; cin >> n2;
     cin.ignore(80, '\n');

     cout << "Entre valor da nota 3: "; cin >> n3;
     cin.ignore(80, '\n');

     cout << "Entre valor da nota 4: "; cin >> n4;
     cin.ignore(80, '\n');

     md1 = (n1 + n2 + n3 + n4) / 4;

     if (md1 >= 7)
        cout << "Aprovado" << endl << endl;

     cout << "Entre valor nota exame: "; cin >> ne;
     md2 = (md1 + ne) / 2;

     if (md2 >= 5)
        cout << "Aprovado em exame" << endl << endl;
     else
        cout << "Reprovado" << endl << endl;

    cout << endl;
    cout << "Media do Aluno: " << setw(5) << md1 << endl;
    cout << "Media Exame...: " << setw(5) << md2 << endl;

    cout << endl << endl;
    cout << "Tecle <Enter> para encerar...";
    cin.get();
    return 0;
 }
