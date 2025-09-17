#include <iostream>
#include <string>
using namespace std;

void validarSenha() {
    string senhaCorreta = "senha123";
    string senha;

    while (true) {
        cout << "Digite a senha: ";
        cin >> senha;
        
        if (senha == senhaCorreta) {
            cout << "Acesso concedido." << endl;
            break;
        } else {
            cout << "Senha incorreta, tente novamente." << endl;
        }
    }
}

int main() {
    validarSenha();
    return 0;
}
