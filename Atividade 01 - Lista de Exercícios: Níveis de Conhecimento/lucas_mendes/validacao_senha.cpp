#include <iostream>
#include <string>
using namespace std;

int main() {
    string senha;

    cout << "Digite a senha: ";
    cin >> senha;

    while (senha != "123") {
        cout << "Senha incorreta. Tente novamente: ";
        cin >> senha;
    }

    cout << "Acesso concedido." << endl;

    return 0;
}
