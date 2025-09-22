//Soma dos Dígitos: Faça um algoritmo que leia um número inteiro e calcule a soma de todos os seus dígitos.

#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;
    
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    
    int numeroTemp = abs(numero);
    
    while (numeroTemp != 0) {
        soma += numeroTemp % 10; 
        numeroTemp /= 10;
    }

    cout << "\nResultado:" << endl;
    cout << "Numero: " << numero << endl;
    cout << "Soma dos digitos: " << soma << endl;
    
    return 0;
}