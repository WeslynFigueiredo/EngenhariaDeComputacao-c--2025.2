#include <iostream>
using namespace std;

int main() {
    int numero, fatorial = 1;

    cout << "Digite um número: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    cout << "Fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}
