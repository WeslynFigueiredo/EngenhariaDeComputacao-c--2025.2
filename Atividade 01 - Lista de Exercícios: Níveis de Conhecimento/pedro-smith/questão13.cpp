#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void jogoAdivinhacao() {
    srand(time(0));  // Inicializa o gerador de n�meros aleat�rios
    int numeroSecreto = rand() % 100 + 1;  // N�mero aleat�rio entre 1 e 100
    int tentativa;

    do {
        cout << "Tente adivinhar o n�mero secreto (entre 1 e 100): ";
        cin >> tentativa;

        if (tentativa < numeroSecreto) {
            cout << "Maior" << endl;
        } else if (tentativa > numeroSecreto) {
            cout << "Menor" << endl;
        }
    } while (tentativa != numeroSecreto);
    
    cout << "Parab�ns! Voc� acertou o n�mero secreto." << endl;
}

int main() {
    jogoAdivinhacao();
    return 0;
}
