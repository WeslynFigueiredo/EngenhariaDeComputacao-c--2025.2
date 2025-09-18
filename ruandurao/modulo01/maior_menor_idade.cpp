#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "--- Vamos ver se voce e dimaior ou dimenor! ---\n";
    cout << "Insira sua idade: ";
    cin >> age;

    if(age > 17){
        cout << "Voce e adulto!";
    } else {
        cout << "Voce e crianca ainda!";
    }

    return 0;
}