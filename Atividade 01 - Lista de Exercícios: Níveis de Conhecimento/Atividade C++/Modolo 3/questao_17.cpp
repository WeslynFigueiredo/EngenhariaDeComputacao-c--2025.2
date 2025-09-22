//Divisores de um Número: Crie um programa que leia um número inteiro e imprima todos os seus divisores.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numero;
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "digite um numero inteiro positivo!" << endl;
        return 0;
    }
    
    vector<int> divisores;
    
    cout << "\nDivisores de " << numero << ":" << endl;
    
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores.push_back(i);
            cout << i << " ";
        }
    }
    
    cout << "\n\nTotal: " << divisores.size() << " divisores" << endl;
    
    return 0;
}