#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "--- FATORIAL DE UM NUMERO ---\n";
    cout << "Insira um numero para fatoriar: "; cin >> num;

    int numFat = num;
    while(num != 1){
        num--;
        numFat *= num;
    }

    cout << "O fatorial do seu numero e: " << numFat;

    return 0;
}