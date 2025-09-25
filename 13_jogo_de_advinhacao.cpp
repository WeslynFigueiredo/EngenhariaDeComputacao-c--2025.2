#include <iostream> 
#include <cstdlib> 
#include <ctime>

int main() {
    std::srand(std::time(nullptr));

    int secreto = std::rand() % 100 + 1;
    int palpite;

    std::cout << "Tenta adivinhar um numero de (1 a 100) ai jovem!\n";
    
    do {
        std::cout << "Digite seu palpite: ";
        std::cin >> palpite;

        if (palpite > secreto) {
            std::cout << "um pouco menos!\n";
        } else if (palpite < secreto) {
            std::cout << "Um pouco mais!\n";
        } else {
            std::cout << "Acertou miravel!\n";
        }
    } while (palpite != secreto);

    return 0;
}
