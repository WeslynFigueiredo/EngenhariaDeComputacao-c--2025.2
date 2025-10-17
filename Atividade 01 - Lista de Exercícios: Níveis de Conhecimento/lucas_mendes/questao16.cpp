#include <iostream>
using namespace std;

int main() {
    double numero, soma = 0;
    int contador = 0;

    cout << "Digite os numeros (valor negativo para encerrar):" << endl;

    while (true) {
        cin >> numero;

        if (numero < 0) {
            break;
        }

        soma += numero;
        contador++;
    }

    if (contador == 0) {
        cout << "Nenhum número válido foi digitado." << endl;
    } else {
        double media = soma / contador;
        cout << "Quantidade de numeros digitados: " << contador << endl;
        cout << "Media: " << media << endl;
    }

    return 0;
}
