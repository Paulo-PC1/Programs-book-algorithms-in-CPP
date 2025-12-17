#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
#include <cctype>

using namespace std;

struct Funcionario
{
    string nome;
    int32_t matricula;
    float salario;
};

void pausa(void)
{
    cout << endl;
    cout << "Tecle <Enter> para encerrar ... ";
    cin.get();
}

vector<Funcionario> func(3);

void cadastro(void)
{
    cout << "Cadastro de Funcionarios. " << endl;
    cout << "--------------------------" << endl;

    for(size_t i = 0; i < func.size(); ++i){
        cout << "Nome: ";
        getline(cin, func[i].nome);
        cout << "Matricula: ";
        cin >> func[i].matricula;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Salario: ";
        cin >> func[i].salario;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
    }
}

void pesquisa(void)
{
    bool acha;
    int32_t pesq;
    char resp = 'S';
    uint32_t comeco, meio, fim;

    cout << "Pesquisa de Funcionarios por matricula." << endl;
    cout << "---------------------------------------" << endl;

    while(toupper(resp) == 'S'){
        cout << "Insira a matricula: ";
        cin >> pesq;

        comeco = 0;
        fim = func.size() - 1;
        acha = false;

        while(comeco <= fim and acha == false){
            meio = (comeco + fim) / 2;
        if (pesq == func[meio].matricula)
            acha = true;
        else
            if(pesq < func[meio].matricula)
                fim = meio - 1;
            else
                comeco = meio + 1;
        }
    if(acha == true){
        cout << "Nome Funcionario: " << func[meio].nome << endl;
        cout << "Matricula Funcionario: " << func[meio].matricula << endl;
        cout << "Salario Funcionario: " << func[meio].salario << endl << endl;
    }

    cout << "Deseja realizar outra busca? [S] Sim / [qualquer letra] Nao --> ";
    cin.get(resp);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void classificar(void)
{
    Funcionario x;

    for(size_t i = 0; i < func.size(); ++i){
        for(size_t j = i + 1; j < func.size(); ++j){
            if(func[i].matricula > func[j].matricula){
                x = func[i];
                func[i] = func[j];
                func[j] = x;
            }
        }
    }

    cout << "Funcionarios classificados por numero de matricula." << endl;
}

void salarioAcima(void)
{

    cout << "Salarios acima de R$ 1000." << endl;
    cout << "--------------------------" << endl;

    for(size_t i = 0; i < func.size(); ++i){
        if(func[i].salario > 1000){
            cout << "Nome Funcionario: " << func[i].nome << endl;
            cout << "Matricula Funcionario: " << func[i].matricula << endl;
            cout << "Salario Funcionario: " << func[i].salario << endl;
            cout << "---------------------------------------------" << endl << endl;
        }
    }
}

void salarioAbaixo(void)
{

    cout << "Salarios acima de R$ 1000." << endl;
    cout << "--------------------------" << endl;

    for(size_t i = 0; i < func.size(); ++i){
        if(func[i].salario < 1000){
            cout << "Nome Funcionario: " << func[i].nome << endl;
            cout << "Matricula Funcionario: " << func[i].matricula << endl;
            cout << "Salario Funcionario: " << func[i].salario << endl;
            cout << "---------------------------------------------" << endl << endl;
        }
    }
}

void salarioIgual(void)
{

    cout << "Salarios acima de R$ 1000." << endl;
    cout << "--------------------------" << endl;

    for(size_t i = 0; i < func.size(); ++i){
        if(func[i].salario == 1000){
            cout << "Nome Funcionario: " << func[i].nome << endl;
            cout << "Matricula Funcionario: " << func[i].matricula << endl;
            cout << "Salario Funcionario: " << func[i].salario << endl;
            cout << "---------------------------------------------" << endl << endl;
        }
    }
}

int main(void)
{
    int32_t op;

    do{
        cout << setw(8) << "Sistema de Registro de Funcionarios" << endl;
        cout << setw(10) << "Menu: " << endl;
        cout << "1 - Cadastro de funcionarios" << endl;
        cout << "2 - Classificar por matricula" << endl;
        cout << "3 - Pesquisa por numero de matricula" << endl;
        cout << "4 - Funcionarios que recebem acima de R$ 1000" << endl;
        cout << "5 - Funcionarios que recebem abaixo de R$ 1000" << endl;
        cout << "6 - Funcionarios que recebem R$ 1000" << endl;
        cout << "7 - Sair" << endl << endl;
        cout << "Escolha uma opcao: ";
        cin >> op;
        cin.ignore(80, '\n');
        switch (op)
        {
            case 1: cadastro();         break;
            case 2: classificar() ;     break;
            case 3: pesquisa();         break;
            case 4: salarioAcima();     break;
            case 5: salarioAbaixo();    break;
            case 6: salarioIgual();     break;
            case 7: pausa();            break;
            default: cout << "Opcao invalida. Tente Novamente." << endl; break;
        }
    }
    while(not(op == 7));

    return 0;
}
