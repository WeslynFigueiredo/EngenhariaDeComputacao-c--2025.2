//Pares até 20: Crie um programa que imprima os números pares de 1 a 20.

#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 20; i++){
        int resto = i%2;
        if (resto == 0){
            cout << "-"<< i<< endl;
        }
    }
}