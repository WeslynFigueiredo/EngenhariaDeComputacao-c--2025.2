#include <iostream>

int main() {
    int numero, numeroOriginal, inverso = 0, digito;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    numeroOriginal = numero;

    while (numero != 0) {
        digito = numero % 10; 
        inverso = inverso * 10 + digito; 
        numero /= 10; 
    }

    if (numeroOriginal == inverso) {
        std::cout << numeroOriginal << " é um numero palíndromo." << std::endl;
    } else {
        std::cout << numeroOriginal << " não é um numero palíndromo." << std::endl;
    }

    return 0;
}