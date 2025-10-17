#include <iostream>
using namespace std;

int main() {
    
    string login;
    int senha;
    
    cout << "digite seu usuario: "; cin >> login;
    cout << "digite sua senha: "; cin >> senha;
    
    if (login == "admin" && senha == 1234) {
        cout << "Bem vindo zé" << endl;
        
    } else {
        cout << "não te reconheço zé, saia" << endl;
    }
return 0;
}
