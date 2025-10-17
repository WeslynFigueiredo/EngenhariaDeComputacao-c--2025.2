#include <iostream>
using namespace std;

void fibonacci() {
    int n;
    cout << "Digite um n�mero para gerar a sequ�ncia de Fibonacci: ";
    cin >> n;
    
    int a = 0, b = 1;
    cout << "Sequ�ncia de Fibonacci: ";
    
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << endl;
}

int main() {
    fibonacci();
    return 0;
}

