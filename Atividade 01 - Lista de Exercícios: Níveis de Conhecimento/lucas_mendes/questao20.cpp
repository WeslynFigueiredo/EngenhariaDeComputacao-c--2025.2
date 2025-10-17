#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite o valor de n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, digite um numero maior que zero." << endl;
        return 0;
    }

    int a = 0, b = 1;

    cout << "Sequencia de Fibonacci ate o " << n << "º termo:" << endl;

    for (int i = 0; i < n; i++) {
        cout << a << " ";

        int proximo = a + b;
        a = b;
        b = proximo;
    }

    cout << endl;
    return 0;
}
