#include <iostream>
using namespace std;

int main() {
    int num, soma = 0;
    cout << "Digite numeros (0 para sair): ";
    cin >> num;

    while (num != 0) {
        soma += num;
        cin >> num;
    }

    cout << "Soma dos numeros digitados = " << soma << endl;
    return 0;
}
