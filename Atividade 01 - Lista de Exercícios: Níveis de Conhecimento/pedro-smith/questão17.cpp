#include <iostream>
using namespace std;

void divisores() {
    int numero;
    cout << "Digite um n�mero inteiro: ";
    cin >> numero;
    
    cout << "Os divisores de " << numero << " s�o: ";
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    divisores();
    return 0;
}
