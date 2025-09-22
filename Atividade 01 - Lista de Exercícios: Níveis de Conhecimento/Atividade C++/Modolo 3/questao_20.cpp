//Sequência de Fibonacci: Crie um programa que leia um número ne 
//imprima a sequência de Fibonacci até o nquinto termo.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite quantos termos deseja gerar: ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "digite um numero positivo!" << endl;
        return 0;
    }
    
    cout << "\nSequencia de Fibonacci: ";
    
    long long a = 0, b = 1;
    
    for (int i = 1; i <= numero; i++) {
        cout << a;
        if (i < numero) cout << ", ";
        
        long long temp = a + b;
        a = b;
        b = temp;
    }
    
    cout << endl;
    return 0;
}