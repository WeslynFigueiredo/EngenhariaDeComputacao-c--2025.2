#include <iostream> 
#include <cstdlib> 
#include <ctime>    

int main() {
   
    srand(time(0));

    
    int numero_secreto = rand() % 100 + 1;
    int palpite = 0;
    int tentativas = 0;

    std::cout << "Bem-vindo ao Jogo de Adivinhação!\n";
    std::cout << "Adivinhe o número secreto entre 1 e 100.\n";

    
    while (palpite != numero_secreto) {
        
        std::cout << "Digite o seu palpite: ";
        std::cin >> palpite;

        tentativas++;
        
        if (palpite < numero_secreto) {
            std::cout << "Menor! Tente um número maior.\n";
        } else if (palpite > numero_secreto) {
            std::cout << "Maior! Tente um número menor.\n";
        } else {
            
            std::cout << "Parabéns! Você acertou o número secreto (" << numero_secreto << ") em " << tentativas << " tentativas!\n";
        }
    }

    return 0; 
}