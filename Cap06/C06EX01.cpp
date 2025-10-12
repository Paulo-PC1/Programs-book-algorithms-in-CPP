 #include <iostream>
 #include <array>
 #include <string>
 #include <iomanip>

 using namespace std;

 int main(void)
 {
     array<string, 10> nome;
     size_t i;

     cout << "Leitura dos  nomes:"  << endl;
     cout << endl;

     for (i = 0; i < nome.size(); ++i){
        cout << "Digite o nome: " << setw(2) << i + 1;
        cout << "o. nome: ";
        getline(cin, nome[i]);
     }
     cout << endl;

    for (i = 0; i < nome.size(); ++i){
        cout << setw(2) << i + 1 << "nome : " << nome[i] << endl;
    }

    cout << endl;
    cout << "Tecle <Enter> para encerar...";
    cin.get();
    return 0;
 }
