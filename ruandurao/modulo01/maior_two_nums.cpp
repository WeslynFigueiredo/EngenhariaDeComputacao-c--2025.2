#include <iostream>
using namespace std;

int main(){
    int num0;
    int num1;
    cout << "--- QUAL NUMERO E MAIOR! ---\n";
    cout << "Insira o primeiro numero: "; cin >> num0;
    cout << "Insira o segundo numero: "; cin >> num1;
    

    if(num0 > num1){
        cout << "O numero " << num0 << " e maior que " << num1;
    } else if (num0 < num1){
        cout << "O numero " << num0 << " e menor que " << num1;
    } else {
        cout << "Os numeros são iguais!";
    }

    return 0;
}