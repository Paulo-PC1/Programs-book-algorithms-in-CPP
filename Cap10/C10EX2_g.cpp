#include <iostream>
#include <print>
#include <cmath>

void pausa(void)
{
	std::println("");
	std::print("Tecle <Enter> para encerrar... ");
	std::cin.get();
}

void quadrado(int32_t a, int32_t b, int32_t c)
{
	int32_t resultadoSoma, resultadoQuadrado;

	resultadoSoma = a + b + c;
	resultadoQuadrado = pow(resultadoSoma, 2);

	std::println("A soma dos valores {}, {}, {} = {} ", a, b, c, resultadoSoma);
	std::println("O quadrado da soma dos valores {}, {}, {} e = {}.", a, b, c, resultadoQuadrado);
}
int main(void)
{
	int32_t a, b, c;

	std::print("Insra o primeiro valor numerico: "); std::cin >> a;
	std::cin.ignore(80, '\n');

	std::print("Insra o segundo valor numerico: "); std::cin >> b;
	std::cin.ignore(80, '\n');

	std::print("Insra o terceiro valor numerico: "); std::cin >> c;
	std::cin.ignore(80, '\n');

	std::println("");


	quadrado(a, b, c);
	pausa();

	return 0;
}
