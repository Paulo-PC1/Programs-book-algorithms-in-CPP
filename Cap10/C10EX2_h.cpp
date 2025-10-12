#include <iostream>
#include <print>

void pausa(void)
{
	std::println("");
	std::print("Tecle <Enter> para encerrar... ");
	std::cin.get();
}

void Temperatura(float c)
{
	float f;

	f = c * 9 / 5 + 32;

	std::println("{} graus Celcius em Fahrenheit = {}", c, f);

}
int main(void)
{
	float c;

	std::println("Conversao de temperatura de Celcius para Fahrenheit.");

	std::print("Entre Temperatura em graus Celcius: "); std::cin >> c;
	std::cin.ignore(80, '\n');

	Temperatura(c);
	pausa();

	return 0;
}
