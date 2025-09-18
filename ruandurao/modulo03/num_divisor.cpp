#include <iostream>
using namespace std;

int main(){
    int num, numOg;
    cout << "--- DIVISORES DE UM NUMERO ---\n";
    cout << "Insira um numero para descobrir seus divisores: "; cin >> numOg;

    num = numOg;
    cout << "O numero '" << numOg << "' e divisivel por esses numeros:\n";
    while(num > 0){
        if((numOg % num) == 0){
            cout << "| " << num << "\n";
        }
        num--;
    }
    return 0;
}