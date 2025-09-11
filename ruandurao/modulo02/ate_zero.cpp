#include <iostream>
using namespace std;

int main(){
    int num;
    int total = 0;
    cout << "--- SOMAR ATÉ DIGITAR ZERO ---\n";
    while(true){
        cout << "Insira um numero: "; cin >> num;
        if(num == 0){
            cout << "Soma total de todos os numeros digitados: " << total;
            break;
        }
        total += num;
    }

    return 0;
}