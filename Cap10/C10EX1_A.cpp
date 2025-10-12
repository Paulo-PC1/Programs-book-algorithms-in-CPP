 //C10EX01_SUB_ROTINA

 #include <iostream>
 #include <array> // pois a variavel é estatica não sendo possivel mudar a quantidade de pessoas cadastradas mas pode ser vector
 //#include <vector>
 #include <iomanip>
 #include <string>
 #include <ciso646> // desnecessario se usar clang ou gcc
 #include <cctype>

 using namespace std;

 struct Agenda
 {
    string nome;
    string endereco;
    string telefone;
 };

 array<Agenda, 10> ag;
 //vector<Agenda> ag(10);
 size_t i;

 void pausa(void)
 {
     cout << endl;
     cout << "Tecle <ENTER> para encerrar...";
     cin.get();
 }

 void cadastro(void)
 {

     for(i = 0; i < ag.size(); ++i){
        cout << "Entre os dados da pessoa:" << endl;
        cout << "Entre " << setw(2) << i + 1 << "o. Nome:" << endl;
        getline(cin, ag[i].nome);
        cout << "Entre " << setw(2) << i + 1 << "o. Endereco:" << endl;
        getline(cin, ag[i].endereco);
        cout << "Entre " << setw(2) << i + 1 << "o. Telefone:" << endl;
        getline(cin, ag[i].telefone);
     }
 }

 void pesquisa(void)
 {
     bool acha;
     string pesq;
     char resp = 'S';

     while(toupper(resp) == 'S'){
        cout << "Pesquise uma pessoa cadastrada:" << endl;
        getline(cin, pesq);
        i = 0;
        acha = false;
        while((i < ag.size()) and (acha == false))
            if(pesq == ag[i].nome)
                acha = true;
            else
                ++i;
        if(acha == true){
            cout << "Nome: " << ag[i].nome << endl;
            cout << "Endereco: "  << ag[i].endereco << endl;
            cout << "Telefone: " << ag[i].telefone << endl;
        }
        else
            cout << "Nome nao cadastrado...";

        cout << "Deseja realizar outra busca? [S] Sim / [qualquer letra] Nao --> ";
        cin.get(resp);
        cin.ignore();
     }
 }

 void classificar(void)
 {
    size_t j;
    Agenda  x;

    for(i = 0; i < ag.size(); ++i){
        for(j = i + 1; j < ag.size(); ++j){
            if(ag[i].nome > ag[j].nome){
                x = ag[i];
                ag[i] = ag[j];
                ag[j] = x;
            }
        }
    }
 }

 void apresentar(void)
 {
     cout << "Apresentaçao dos nomes cadastrados:" << endl;
     for(i = 0; i < ag.size(); ++i){
        cout << "------------------------------" << endl;
        cout << "Nome: " << ag[i].nome << endl;
        cout << "Endereco: " << ag[i].endereco << endl;
        cout << "Telefone: " << ag[i].telefone << endl;
        cout << "------------------------------" << endl;
     }
 }

 int main(void)
 {
     int32_t op;

     do {
        cout << setw(8) << "Sistema de Agenda" << endl;
        cout << setw(10) << "Menu: " << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Pesquisar" << endl;
        cout << "3 - Classificar" << endl;
        cout << "4 - Apresentar" << endl;
        cout << "5 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> op;
        cin.ignore(80, '\n');
        switch (op)
        {
            case 1: cadastro();    break;
            case 2: pesquisa() ;   break;
            case 3: classificar(); break;
            case 4: apresentar();  break;
            case 5: pausa();       break;
            default: cout << "Opcao invalida. Tente Novamente." << endl; break;
        }
     } while(not(op == 5));

     return 0;
 }

