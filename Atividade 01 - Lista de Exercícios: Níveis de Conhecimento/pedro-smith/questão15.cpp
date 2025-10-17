#include <iostream>
using namespace std;

void fatorial() {
    int numero;
    cout << "Digite um número para calcular o fatorial: ";
    cin >> numero;
    
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    
    cout << "O fatorial de " << numero << " é: " << resultado << endl;
}

int main() {
    fatorial();
    return 0;
}
