#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Digite um número inteiro positivo maior que zero." << endl;
    } else {
        cout << "Divisores de " << numero << " são: ";

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
