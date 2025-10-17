//Validação de Senha: Crie um programa que leia uma senha. O programa deve continuar pedindo a senha até que a senha 
//correta ("senha123") seja digitada. Ao acertar, imprima "Acesso concedido.".

#include <iostream>
using namespace std;

int main(){
    string nome;
    string senha;
    string nome_criado;
    string senha_criada;
    
    cout << "Digite um nome: ";
    cin >> nome;
    cout << "Digite uma senha: "<< endl;
    cin >> senha;
    cout << "Muito bem, agora confirme seu cadastro."<< endl;

    do
    {
        cout << "nome: " << endl;
        cin >> nome_criado;
        cout << "Senha: " << endl;
        cin >> senha_criada;
        if (nome_criado != nome || senha_criada != senha)
        {
            cout << "Nome ou senha incorreto" << endl;
        }
    } while (nome_criado == nome && senha_criada == senha);
    cout << "Acesso concedido." << endl;
    return 0;
}