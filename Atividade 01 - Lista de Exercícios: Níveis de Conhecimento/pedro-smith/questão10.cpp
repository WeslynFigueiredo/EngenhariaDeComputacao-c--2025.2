#include <iostream>
using namespace std;

void tabuada() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    
    int i = 1;
    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }
}

int main() {
    tabuada();
    return 0;
}
