#include <iostream>
#include <ciso646>
#include <iomanip>
#include <string>

using namespace std;

struct Pessoa
{
	string nome;
	float altura;
};

size_t tamanho;
Pessoa *ppessoa;

void Pausa(void)
{
	cout << endl;
	cout << "Tecle <Enter> para encerrar...";
	cin.get();
}

void TamanhoMatriz(void)
{

	cout << "Entre a quantidades de pessoas a serem cadastradas: ";
	cin >> tamanho;
	cin.ignore(80, '\n');

	ppessoa = new Pessoa[tamanho];
}

void Cadastro(void)
{
	//ppessoa = new Pessoa[tamanho];

	cout << "Cadastro das pessoas e suas alturas." << endl;
	cout << "------------------------------------" << endl;

	for(size_t i = 0; i < tamanho; ++i){
		cout << "Entre " << setw(2) << i + 1 << "o. nome: ";
		getline(cin, ppessoa[i].nome);
		cout << endl;
		cout << "Entre a altura: ";
		cin >> ppessoa[i].altura;
		cin.ignore(80, '\n');
	}
}

void Menores(void)
{
	if (!ppessoa) {
		cout << "Nenhum cadastro ainda.\n";
        return;
    }

	cout << "Pessoas com 1.5m ou menos." << endl;
	cout << "----------------------------------" << endl;

	for(size_t i = 0; i < tamanho; ++i){
		if(ppessoa[i].altura <= 1.5){
			cout << "Nome: " << ppessoa[i].nome << endl;
			cout << "Altura: " << ppessoa[i].altura << endl;
			cout << "------------------------------" << endl;
		}
	}
}

void Maiores(void)
{
	if (!ppessoa) {
		cout << "Nenhum cadastro ainda.\n";
        return;
    }

	cout << "Pessoas com 1.5m ou mais." << endl;
	cout << "----------------------------------" << endl;

	for(size_t i = 0; i < tamanho; ++i){
		if(ppessoa[i].altura >= 1.5){
			cout << "Nome: " << ppessoa[i].nome << endl;
			cout << "Altura: " << ppessoa[i].altura << endl;
			cout << "------------------------------" << endl;
		}
	}
}

void MaiorMenor(void)
{
	if (!ppessoa) {
		cout << "Nenhum cadastro ainda.\n";
        return;
    }

	cout << "Pessoa com mais de 1.5m e menos de 2m." << endl;
	cout << "----------------------------------" << endl;

	for(size_t i = 0; i < tamanho; ++i){
		if(ppessoa[i].altura >= 1.5 and ppessoa[i].altura <= 2){
			cout << "Nome: " << ppessoa[i].nome << endl;
			cout << "Altura: " << ppessoa[i].altura << endl;
			cout << "------------------------------" << endl;
		}
	}
}


void Media(void)
{
	if (!ppessoa) {
		cout << "Nenhum cadastro ainda.\n";
        return;
    }

	cout << "Apresentacao de todos os cadastros e a media das alturas." << endl;
	cout << "---------------------------------------------------------" << endl;

	float soma = 0;

	for(size_t i = 0; i < tamanho; ++i) {
        cout << "Nome: "<< ppessoa[i].nome << endl;
        cout << "Altura: " << ppessoa[i].altura << endl;
        soma += ppessoa[i].altura;
    }

    cout << "---------------------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Media das alturas: " << soma / tamanho << " m" << endl;

}

int main(void)
{
	int32_t op;
	TamanhoMatriz();
	do{
		cout << setw(8) << "Sistema de armazenamento de pessoas e suas alturas." << endl;
		cout << setw(10) << "Menu: " << endl;
		cout << "1 - Cadastrar" << endl;
		cout << "2 - Menres de 1.5m" << endl;
		cout << "3 - Maiores de 1.5m" << endl;
		cout << "4 - Pessooas entre 1.5m e 2m" << endl;
		cout << "5 - Pessoas e a Medias das alturas" << endl;
		cout << "6 - Sair" << endl;
		cin >> op;
		cin.ignore(80, '\n');
		switch (op)
		{
			case 1: Cadastro(); 	break;
			case 2: Menores(); 		break;
			case 3: Maiores(); 		break;
			case 4: MaiorMenor(); 	break;
			case 5: Media(); 		break;
			case 6: Pausa(); 		break;
			default: cout << "Opcao Invalida. Tente Novamente." << endl	; break;
		}
	}while(not(op == 6));

	delete[] ppessoa;

	return 0;
}
