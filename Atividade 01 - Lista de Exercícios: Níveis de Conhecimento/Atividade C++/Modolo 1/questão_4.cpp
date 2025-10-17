//Sistema de Login Simples: Crie um algoritmo para um sistema de login.
//O programa deve pedir um nome de usuário e uma senha. Se o usuário for "admin" e a senha for "1234",
//imprima "Login bem-sucedido!". Em qualquer outro caso, imprima "Usuário ou senha incorretos".

#include <iostream>
using namespace std;

int main(){
    cout << "-----Bem vindo-----";
    cout << "Realize seu cadastro:" << endl;
    string nome;
    string senha;
    cout << "Digite um nome de usuario: "<< endl;
    cin >> nome;
    cout << "Digite uma senha: " << endl;
    cin >> senha;
    cout<< "Cadastro realizado com sucesso ou quase"<< endl;

    cout << "------Login------"<< endl;
    string nome_usuario;
    string senha_usuario;
    cout << "Nome de usuario: "<<endl;
    cin >> nome_usuario;
    cout << "Senha:" << endl;
    cin >> senha_usuario;

    if (nome_usuario == nome && senha_usuario == senha){
        cout << "Login realizado com sucesso"<< endl;
    }
    else if (nome_usuario != nome || senha_usuario != senha){
        cout << "noo foi possivel logar" << endl;
    }
    return 0;

}