#include <iostream>

int main() {
    int numero;
    int soma_digitos = 0;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;

    int temp_numero = numero; // Armazena o número original para exibição

    while (temp_numero > 0) {
        int digito = temp_numero % 10;
        soma_digitos += digito;
        temp_numero /= 10;
    }

    std::cout << "A soma dos digitos de " << numero << " e: " << soma_digitos << std::endl;

    return 0;
}
