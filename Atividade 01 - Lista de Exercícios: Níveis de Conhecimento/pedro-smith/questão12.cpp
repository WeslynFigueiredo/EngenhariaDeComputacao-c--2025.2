#include <iostream>
using namespace std;

void maiorNumero() {
    int maior = 0;
    for (int i = 1; i <= 5; i++) {
        int numero;
        cout << "Digite o " << i << "� n�mero: ";
        cin >> numero;
        
        if (i == 1 || numero > maior) {
            maior = numero;
        }
    }
    
    cout << "O maior n�mero digitado foi: " << maior << endl;
}

int main() {
    maiorNumero();
    return 0;
}

