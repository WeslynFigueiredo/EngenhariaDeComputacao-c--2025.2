#include <iostream>
using namespace std;

int main(){
    string username;
    string pw;
    cout << "--- LOGIN NO SISTEMA MAIS BRABO DO UNIVERSO ---\n";
    cout << "Insira seu nome de usuario: "; cin >> username;
    cout << "Insira sua senha: "; cin >> pw;

    if(username == "admin" && pw == "1234"){
        cout << "Login feito com sucesso!";
    } else {
        cout << "Usuario e/ou senha estao incorretos.";
    }

    return 0;
}