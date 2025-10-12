#include <iostream>
#include <print>

void pausa(void)
{
	std::println(" ");
	std::print("Tecle <Enter> para encerrar... ");
	std::cin.get();
}

void conversao(float cotacao, float dolarDisp)
{
	float real;

	real = dolarDisp * cotacao;

	std::print("{} (US$) dolares em (R$)Reais = {} ", dolarDisp, real);
	std::println("Valor da cotacao usada {}.", cotacao);
}

int main(void)
{
	float cotacao, dolar;

	std::println("Conversor de Dolar(US$) para Real(R$)");

	std::print("Insira o valor de dolares disponiveis: "); std::cin >> dolar;
	std::cin.ignore(80, '\n');

	std::print("Insira o valor da cotacao do dolar: "); std::cin >> cotacao;
	std::cin.ignore(80, '\n');

	conversao(cotacao, dolar);
	pausa();

	return 0;
}
