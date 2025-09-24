#include <iostream>
#include <string>
#include <cctype> // Para std::tolower

int main() {
    std::string frase;
    int contadorVogais = 0;

    std::cout << "Por favor, insira uma frase: ";
    std::getline(std::cin, frase);

    for (char caractere : frase) {
        char caractereMinusculo = std::tolower(caractere);
        if (caractereMinusculo == 'a' || caractereMinusculo == 'e' || 
            caractereMinusculo == 'i' || caractereMinusculo == 'o' || 
            caractereMinusculo == 'u') {
            contadorVogais++;
        }
    }

    std::cout << "O número de vogais na frase é: " << contadorVogais << std::endl;

    return 0;
}