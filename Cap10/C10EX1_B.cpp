#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

//estrutura(registro) para armazenas os dados dos alunos (nome,notas e media)
struct CadAlunos
{
    string nome;
    array<float, 4> notas;
    float media;
};

// "rotina" de troca usando biblioteca algorithm
bool cmpNome(const CadAlunos &a, const CadAlunos &b)
{
    return a.nome < b.nome;
}

// criacao de vetor usando a struct CadAlunos para armazenar os registros dos alunos
vector<CadAlunos> alunos(20);
size_t i, j;

// rotina de pausa do programa
void pausa(void)
{
    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar... ";
    std::cin.get();

}

//rotina para calculo da media dos alunos
void CalcMedia(void)
{

    for(i = 0; i < alunos.size(); ++i){
        float soma_nt = 0;
        for(j = 0; j < alunos[i].notas.size(); ++j){
            soma_nt += alunos[i].notas[j];
        }
        alunos[i].media = soma_nt / alunos[i].notas.size();
    }

}

//rotina de cadastro dos alunos, seu nome e media
void cadastro(void)
{
    //CadAlunos x;

    cout << "Cadastro dos Alunos e suas notas" << endl;
    cout << "--------------------------------" << endl << endl;

    for(i = 0; i < alunos.size(); ++i){
        cout << "Entre " << setw(2) << i + 1 << "o. nome: ";
        getline(cin, alunos[i].nome);
        cout << endl;
        cout << "Entre as notas: " << endl << endl;
        for (j = 0; j < alunos[i].notas.size(); ++j){
        cout << "Entre " << setw(2) << j + 1 << "a. nota: ";
        //getline(cin, alunos[i].notas[j]);
        string entranota;
        getline(cin, entranota);
        alunos[i].notas[j] = atof(entranota.c_str());
        cout << endl;
        }
    }
    sort(alunos.begin(), alunos.end(), cmpNome);
        /**for (i = 0; i< alunos.size(); ++i){
            for (j = i + 1; j < alunos.size(); ++j){
                if (alunos[i].nome > alunos[j].nome){
                    x = alunos[i];
                    alunos[i] = alunos[j];
                    alunos[j] = x;
                }
            }
        }**/

}

//rotina de pesquisa (onde busca por nome e mostra a media e a situacao do aluno "Aprovado" ou "Reprovado") utilizando o algoritimo de pesquisa binária
void pesquisa(void)
{
    bool acha;
    string pesq;
    char resp = 'S';
    uint32_t comeco, fim, meio;

    while(toupper(resp) == 'S'){
        cout << "Pesquise um aluno:" << endl;
        getline(cin, pesq);

        comeco = 0;
        fim = alunos.size() - 1;
        acha = false;

        while(comeco <= fim and acha == false){
            meio = (comeco + fim) / 2;
        if (pesq == alunos[meio].nome)
            acha = true;
        else
            if(pesq < alunos[meio].nome)
                fim = meio - 1;
            else
                comeco = meio + 1;
        }
    CalcMedia();
    if(acha == true){
        cout << "Nome Aluno: " << alunos[meio].nome << endl;
        cout << "Media Aluno: " << alunos[meio].media << endl;
        if(alunos[meio].media >= 5)
            cout << "Situacao: " << "Aprovado" << endl;
        else
            cout << "Situacao: " << "Reprovado" << endl;
    }
    else
        cout << "Aluno nao cadastrado...";

    cout << "Deseja realizar outra busca? [S] Sim / [qualquer letra] Nao --> ";
    cin.get(resp);
    cin.ignore(80, '\n');
    }
}

//rotina de apresentacao de todos os registros e as situacoes de cada um deles
void apresentar(void)
{
    cout << "Apresentacao de todos os alunos e suas medias: " << endl;
    for (i = 0; i < alunos.size(); ++i){
        cout << "------------------------------" << endl;
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Media: " << alunos[i].media << endl;
        if(alunos[i].media >= 5)
            cout << "Situacao: " << "Aprovado" << endl;
        else
            cout << "Situacao: " << "Reprovado" << endl;
        cout << "------------------------------" << endl;
    }
}

//rotina de apresentacao dos alunos aprovados e suas medias
void aprovados(void)
{
    cout << "Apresentacao dos Aprovados e suas medias: " << endl;
    for (i = 0; i < alunos.size(); ++i){
        if (alunos[i].media >= 5){
            cout << "------------------------------" << endl;
            cout << "Nome: " << alunos[i].nome << endl;
            cout << "Media: " << alunos[i].media << endl;
            cout << "------------------------------" << endl;
        }
        else
            cout << "Sem alunos aprovados" << endl;
    }
}

//rotina de apresentacao dos alunos reprovados e suas medias
void reprovados(void)
{
    cout << "Apresentacao dos Reprovados e suas medias: " << endl;
    for (i = 0; i < alunos.size(); ++i){
        if (alunos[i].media < 5){
            cout << "------------------------------" << endl;
            cout << "Nome: " << alunos[i].nome << endl;
            cout << "Media: " << alunos[i].media << endl;
            cout << "------------------------------" << endl;
        }
        else
            cout << "Sem alunos aprovados" << endl;
    }
}

//rotina principal do programa(main) contendo o menu de acesso as subrotinas
int main(void)
{
    int32_t op;

    do {
        cout << setw(8) << "Sistema de Registro do curso de Tecnicas de Programacao." << endl;
        cout << setw(10) << "Menu: " << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Pesquisar alunos" << endl;
        cout << "3 - Situacao dos alunos" << endl;
        cout << "4 - Aprovados" << endl;
        cout << "5 - Reprovados" << endl;
        cout << "6 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> op;
        cin.ignore(80, '\n');
        switch (op)
        {
            case 1: cadastro();     break;
            case 2: pesquisa();     break;
            case 3: apresentar();   break;
            case 4: aprovados();    break;
            case 5: reprovados();   break;
            case 6: pausa();        break;
            default: cout << "Opcao invalida. Tente Novamente." << endl; break;
        }
    } while(not(op == 6));

    return 0;
}
