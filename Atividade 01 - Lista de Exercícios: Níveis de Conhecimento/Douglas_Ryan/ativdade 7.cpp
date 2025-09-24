#include <iostream>

int main() {
    int soma = 0;
    int contador = 1;

    while (contador <= 50) {
        soma = soma + contador;
        contador = contador + 1;
    }

    std::cout << "A soma dos números de 1 a 50 é: " << soma << std::endl;

    return 0;
}