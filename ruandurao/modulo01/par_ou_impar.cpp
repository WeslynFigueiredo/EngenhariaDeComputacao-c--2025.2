#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "--- Vamos ver se seu numero e impar ou par! ---\n";
    cout << "Insira seu numero: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "Seu numero e par!";
    } else {
        cout << "Seu numero e impar!";
    }

    return 0;
}