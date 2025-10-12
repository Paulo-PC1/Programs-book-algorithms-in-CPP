#include <iostream>
#include <print>

//rotina de pausa do programa
void pausa(void)
{
    std::println("");
    std::print("Tecle <Enter> para encerrar... ");
    std::cin.get();
}
//rotina de calcula da sequencia de fibonacci
void fibonacci(uint64_t n)
{
    uint64_t anterior = 0 , posterior = 1, fib_count = 0 ;

    for (size_t i = 0; i <= n; ++i){
        std::print("{},", anterior);
        fib_count = anterior + posterior;
        anterior = posterior;
        posterior = fib_count;
    }

    std::println("");
}
//rotina principal do programa
int main(void)
{
    uint64_t i;

    std::print("Entre um valor numerico: ");
    std::cin >> i;
    std::cin.ignore(80, '\n');

    fibonacci(i);
    pausa();

    return 0;
}
