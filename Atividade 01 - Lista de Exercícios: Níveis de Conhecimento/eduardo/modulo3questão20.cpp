#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, prox;

    cout << "Digite o valor de n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Número inválido." << endl;
    } else {
        cout << "Sequência de Fibonacci até o " << n << "º termo:" << endl;

        if (n >= 1) cout << a << " ";
        if (n >= 2) cout << b << " ";

        int i = 3;
        while (i <= n) {
            prox = a + b;
            cout << prox << " ";
            a = b;
            b = prox;
            i++;
        }

        cout << endl;
    }

    return 0;
}
