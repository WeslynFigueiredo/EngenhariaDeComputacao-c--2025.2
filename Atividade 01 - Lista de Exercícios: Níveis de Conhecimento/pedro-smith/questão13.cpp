#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void jogoAdivinhacao() {
    srand(time(0));  // Inicializa o gerador de números aleatórios
    int numeroSecreto = rand() % 100 + 1;  // Número aleatório entre 1 e 100
    int tentativa;

    do {
        cout << "Tente adivinhar o número secreto (entre 1 e 100): ";
        cin >> tentativa;

        if (tentativa < numeroSecreto) {
            cout << "Maior" << endl;
        } else if (tentativa > numeroSecreto) {
            cout << "Menor" << endl;
        }
    } while (tentativa != numeroSecreto);
    
    cout << "Parabéns! Você acertou o número secreto." << endl;
}

int main() {
    jogoAdivinhacao();
    return 0;
}
