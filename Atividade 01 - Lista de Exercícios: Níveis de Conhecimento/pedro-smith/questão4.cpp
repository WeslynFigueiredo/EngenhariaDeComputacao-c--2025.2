#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, senha;

    cout << "Digite o nome de usuario: ";
    cin >> usuario;

    cout << "Digite a senha: ";
    cin >> senha;

    if (usuario == "admin" && senha == "1234") {
        cout << "Login bem-sucedido!" << endl;
    } else {
        cout << "Usuario ou senha incorretos" << endl;
    }

    return 0;
}
