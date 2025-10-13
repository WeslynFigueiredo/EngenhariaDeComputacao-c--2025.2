#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        int digito = numero % 10;
        soma = soma + digito;
        numero = numero / 10;
    }

    if (soma > 0) {
        cout << "A soma dos dígitos é: " << soma << endl;
    } else {
        cout << "O número digitado foi 0, então a soma dos dígitos é 0." << endl;
    }

    return 0;
}
