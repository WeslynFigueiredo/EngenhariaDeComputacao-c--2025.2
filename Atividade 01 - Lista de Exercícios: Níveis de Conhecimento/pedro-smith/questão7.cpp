#include <iostream>
using namespace std;

int main() {
    int i = 1, soma = 0;
    while (i <= 50) {
        soma += i;
        i++;
    }
    cout << "Soma de 1 a 50 = " << soma << endl;
    return 0;
}

