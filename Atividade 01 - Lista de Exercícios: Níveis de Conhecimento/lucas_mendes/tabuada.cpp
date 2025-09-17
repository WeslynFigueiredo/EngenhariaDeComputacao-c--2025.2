#include <iostream>
using namespace std;

int main() {
    int numero, i = 1;

    cout << "Digite um número para ver a tabuada: ";
    cin >> numero;

    cout << "Tabuada do " << numero << ":" << endl;

    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }

    return 0;
}
