#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
    string nome;
    char sexo;

    cout << "Entre um nome: ";
    getline(cin, nome);

    cout << "Entre o sexo <M> para masculino e <F> para feminino: ";
    cin >> sexo;
    cin.ignore(80, '\n');

    if((toupper(sexo)) != 'M' and (toupper(sexo)) != 'F')
        cout << "Sexo invalido!!" << endl;
    else{
        if((toupper(sexo)) == 'M')
            cout << "llmo.Sr. " << nome << endl;
        if((toupper(sexo)) == 'F')
            cout << "llma.Sra. " << nome << endl;
    }

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();
    return 0;

}
