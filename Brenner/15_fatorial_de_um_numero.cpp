#include <iostream>

int main() {
    int n;
    unsigned long long fatorial = 1; // tipo grande para números grandes

    std::cout << "Digite um numero para calcular o fatorial: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Fatorial nao definido para negativos.\n";
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i; // fatorial = fatorial * i
        }
        std::cout << "Fatorial de " << n << " = " << fatorial << "\n";
    }

    return 0;
}
