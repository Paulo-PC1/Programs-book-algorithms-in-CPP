#include <iostream>


using namespace std;

int main(void)
{
    int32_t a, b, c, d, e;
    int maior, menor;

    cout << "Entre Valor para a variavel <A>: ";
    cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre Valor para a variavel <B>: ";
    cin >> b;
    cin.ignore(80, '\n');

    cout << "Entre Valor para a variavel <C>: ";
    cin >> c;
    cin.ignore(80, '\n');

    cout << "Entre Valor para a variavel <D>: ";
    cin >> d;
    cin.ignore(80, '\n');

    cout << "Entre Valor para a variavel <E>: ";
    cin >> e;
    cin.ignore(80, '\n');


    maior = menor = a;

    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    if (e > maior) maior = e;

    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;


    cout << "Maior valor informado e: " << maior << endl;
    cout << "Menor valor informado e: " << menor << endl;

    cout << endl;
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();

    return 0;
}
