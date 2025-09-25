#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string frase;
    int contador = 0;

    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    for (char c : frase) {
        char letra = std::tolower(c);
        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u') {
            contador++;
        }
    }

    std::cout << "Quantidade de vogais: " << contador << "\n";
    return 0;
}
