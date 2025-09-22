//Maior Número da Sequência: Faça um algoritmo que leia uma sequência de 5 números 
//e imprima o maior número digitado.

#include <iostream>
using namespace std;

int main(){
    int numero_digitado[5];
    cout << "Digite 5 numeros: ";

    for (int i = 0; i<=5; i++){
        cin >> numero_digitado[i];
    }
    int numero_maior= numero_digitado[0]; // Assume que o primeiro é o maior numero digitado
    for (int i = 1; i <= 5; i++){ // passa pela lista
        if (numero_digitado[i] > numero_maior){ //verifica cada item da lista para ver se o numero digitado é maior que o primeiro
            numero_maior = numero_digitado[i]; // armazena esta nova informação
        }
    }
    cout << "O maior numero digitado: " << numero_maior << endl;
    return 0;
}