#include <iostream>
using namespace std;

void fatorial() {
    int numero;
    cout << "Digite um n�mero para calcular o fatorial: ";
    cin >> numero;
    
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    
    cout << "O fatorial de " << numero << " �: " << resultado << endl;
}

int main() {
    fatorial();
    return 0;
}
