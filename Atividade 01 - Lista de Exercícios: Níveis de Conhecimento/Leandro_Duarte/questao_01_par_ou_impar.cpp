#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "manda pai:";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O numero " << numero << " é par." << endl;
    } else { 
        cout << "O numero " << numero << " é impar" << endl;
    }
    return 0;
}
