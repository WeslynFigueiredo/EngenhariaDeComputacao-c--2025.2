#include <iostream>
using namespace std;
main() {
    string login;
    int senha;
    cout<<"Informe o seu usuario"<<endl;
    cin>> login;
    cout<<"Informe sua senha: "<<endl;
    cin>> senha;
    if (login == "admin" && senha == 1234){
        cout<<"Login bem sucedido"<<endl;
    }else{
        cout<<"Usuario ou senha invalida"<<endl;
    }
        
    return 0;
}
