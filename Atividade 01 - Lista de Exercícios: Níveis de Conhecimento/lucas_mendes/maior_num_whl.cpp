#include <iostream>
using namespace std;

int main() {
    int numero, maior;

    cout << "Digite o primeiro numero: ";
    cin >> numero;
    maior = numero;

    for (int i = 2; i <= 5; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;

        if (numero > maior) {
            maior = numero;
        }
    }

    cout << "O maior número digitado foi: " << maior << endl;

    return 0;
}
