#include <iostream>
using namespace std;

int main() {
    string login; 
    int senha;
    
    cout << "Digite seu usuario: "; cin >> login;
    cout << "digite sua senha: "; cin >> senha;
    
    if (login == "admin" && senha == 1234){
        
        cout << "Login bem-sucedido!" << endl;
    }else {
        cout << "Usuário ou senha incorretos" << endl;
    }
    return 0;
}

