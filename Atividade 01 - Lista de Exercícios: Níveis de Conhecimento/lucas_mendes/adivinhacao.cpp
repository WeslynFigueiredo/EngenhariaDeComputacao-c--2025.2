#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42;
    int tentativa;
     cout <<"############################################"<<endl;
     cout << "######Bem-vindo ao jogo de adivinhacao!#####" << endl;

    do {
        cout << "Tente adivinhar o numero: ";
        cin >> tentativa;

        if (tentativa < numeroSecreto) {
            cout << "Maior!" << endl;
        } else if (tentativa > numeroSecreto) {
            cout << "Menor!" << endl;
        } else {
            cout << "Parabens! Voce acertou!" << endl;
        }

    } while (tentativa != numeroSecreto);

    return 0;
}
