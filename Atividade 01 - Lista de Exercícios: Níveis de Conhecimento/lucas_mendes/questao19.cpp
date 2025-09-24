#include <iostream>
using namespace std;

int main() {
    int numero, original, reverso = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    original = numero;

    
    if (numero < 0) {
        cout << "Numeros negativos nao sao considerados palindromos." << endl;
        return 0;
    }

  
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    
    if (original == reverso) {
        cout << original << " eh um palindromo." << endl;
    } else {
        cout << original << " nao eh um palindromo." << endl;
    }

    return 0;
}
