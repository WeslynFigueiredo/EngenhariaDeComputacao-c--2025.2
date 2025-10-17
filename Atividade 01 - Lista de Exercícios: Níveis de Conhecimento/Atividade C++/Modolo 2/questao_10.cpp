//Tabuada: Desenvolva um algoritmo que leia um número e imprima a tabuada desse número, de 1 a 10, usando um loop while.

#include <iostream>
using namespace std;

int main(){
    int numero_escolha;
    int resultado;
    cout << "escolha um numero: ";
    cin >> numero_escolha;
    cout<< "tabuada de " << numero_escolha<<"X"<<endl;
    for (int tabuada = 1 ; tabuada <= 10; tabuada ++){
        resultado = numero_escolha * tabuada;
        cout << numero_escolha<<" X "<<tabuada<<" = "<<resultado<< endl;
    }
    return 0;
}