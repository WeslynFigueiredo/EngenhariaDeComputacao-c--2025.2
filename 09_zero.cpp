#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;
    
    while (true) {
        
        cout << "digite um numero:" << endl;
        cin >> numero;
    
        if (numero == 0) {
            break;
        }
        soma += numero;
    }
    cout << "a soma dos numeros digitados é:" << soma << endl;
    
    return 0;
}
