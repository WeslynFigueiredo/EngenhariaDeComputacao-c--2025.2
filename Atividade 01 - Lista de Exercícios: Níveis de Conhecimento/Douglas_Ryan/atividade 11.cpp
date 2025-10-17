#include <iostream>
#include <string>

using namespace std;

int main() {
    string senhaCorreta = "senha123";
    string senhaDigitada;

    while (senhaDigitada != senhaCorreta) {
        cout << "Digite a senha: ";
        cin >> senhaDigitada;
    }

    cout << "Acesso ao subsídio." << endl;

    return 0;
}