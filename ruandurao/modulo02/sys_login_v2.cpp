#include <iostream>
using namespace std;

int main(){
    string username;
    string pw;
    cout << "--- LOGIN NO SISTEMA MAIS BRABO DO UNIVERSO (V2)---\n";

    while(true){
        cout << "Insira seu nome de usuario: "; cin >> username;
        cout << "Insira sua senha: "; cin >> pw;
        if(username == "admin" && pw == "senha123"){
            cout << "Login feito com sucesso!";
            break;
        } else {
            cout << "Usuario e/ou senha estao incorretos. Tente novamente.\n============\n";
        }
    }

    return 0;
}