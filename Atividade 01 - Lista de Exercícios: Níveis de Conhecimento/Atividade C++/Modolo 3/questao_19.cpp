//Número Palíndromo: Escreva um programa que leia um número inteiro e verifique se ele é um palíndromo 
//(ou seja, se lido da esquerda para a direita é igual a lido da direita para a esquerda).

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int numero;
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    
    int numeroOriginal = numero;
    int reverso = 0;
    int temp = abs(numero);
    
    while (temp > 0) {
        int digito = temp % 10;
        reverso = reverso * 10 + digito;
        temp /= 10;
    }
    
    if (numero < 0) {
        reverso = -reverso;
    }
    
    if (numero == reverso) {
        cout << "\n O numero " << numeroOriginal << " e um palindromo!" << endl;
        cout << "Numero original: " << numeroOriginal << endl;
        cout << "Numero reverso: " << reverso << endl;
    } else {
        cout << "\n O número " << numeroOriginal << " nao e um palindromo!" << endl;
        cout << "Numero original: " << numeroOriginal << endl;
        cout << "Numero reverso: " << reverso << endl;
    }
    
    return 0;
}