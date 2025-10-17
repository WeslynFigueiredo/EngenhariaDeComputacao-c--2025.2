#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

   
    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        soma += numero % 10; 
        numero /= 10;       
    }

    cout << "Soma dos digitos: " << soma << endl;

    return 0;
}
