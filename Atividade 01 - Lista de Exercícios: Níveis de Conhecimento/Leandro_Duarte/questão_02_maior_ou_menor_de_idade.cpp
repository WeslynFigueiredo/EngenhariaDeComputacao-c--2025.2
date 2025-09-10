#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite Sua Idade: ";
    cin >> numero;

    if (numero >= 18) {
        cout << "Você é maior de idade" << endl;
    } else {
        cout << "Você é menor de idade" << endl;
    }

    return 0;
}

