#include <iostream>
using namespace std;

int main() {
    int numero, original, invertido = 0;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Números negativos não são considerados palíndromos." << endl;
        return 0;
    }

    original = numero;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    if (original == invertido) {
        cout << "O número " << original << " é um palíndromo." << endl;
    } else {
        cout << "O número " << original << " não é um palíndromo." << endl;
    }

    return 0;
}
