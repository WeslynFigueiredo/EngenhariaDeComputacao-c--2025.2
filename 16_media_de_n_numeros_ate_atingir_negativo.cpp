#include <iostream>

int main() {
    double soma = 0;
    int quantidade = 0;
    double numero;

    std::cout << "Digite numeros (negativo para parar):\n";

    while (true) {
        std::cin >> numero;
        if (numero < 0) break;
        soma += numero;
        quantidade++;
    }

    if (quantidade == 0) {
        std::cout << "Nenhum numero positivo foi digitado.\n";
    } else {
        double media = soma / quantidade;
        std::cout << "Quantidade: " << quantidade << "\n";
        std::cout << "Media: " << media << "\n";
    }

    return 0;
}
