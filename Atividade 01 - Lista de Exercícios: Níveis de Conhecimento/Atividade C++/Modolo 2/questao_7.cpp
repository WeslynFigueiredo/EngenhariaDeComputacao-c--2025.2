//Soma Cumulativa: Desenvolva um algoritmo que calcula a soma de todos os números de 1 a 50 usando while.
#include <iostream>
using namespace std;

int main(){
    int numero = 1;
    int soma = 0;
    while (numero <= 50){
        soma += numero;  // soma vem antes do saida e incremento
        cout << soma << endl;
        numero++;
    }
}