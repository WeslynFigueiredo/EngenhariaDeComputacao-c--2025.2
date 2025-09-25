#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero, maior;
    
    cout << "digite 5 numeros inteiros, ";
    
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;
        
        if (i == 0 || numero > maior) {
            maior = numero;
        }
    }
        cout << "o maior numero digitado foi:" << maior << endl;
        
    return 0;
