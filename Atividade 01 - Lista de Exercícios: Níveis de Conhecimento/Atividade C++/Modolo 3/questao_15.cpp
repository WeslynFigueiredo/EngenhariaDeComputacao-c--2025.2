//Fatorial de um Número: Faça um programa que leia um
//número e calcule o seu fatorial (ex.: fatorial de 5 é 5*4*3*2*1).

#include <iostream>
using namespace std;

int main() {
    int numero;
    long long fatorial = 1;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Nao existe fatorial de numero negativo!" << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        cout << "O fatorial de " << numero << " e " << fatorial << endl;
    }

    return 0;
}
