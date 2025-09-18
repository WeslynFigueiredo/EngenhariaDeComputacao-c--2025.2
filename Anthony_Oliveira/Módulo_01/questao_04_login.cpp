#include <iostream>
using namespace std;

int main(){
	string nome;
	string senha;
	
	cout << "Digite seu nome de usuário" << endl;
	cin >> nome;
	cout << "Digite sua senha" << endl;
	cin >> senha;
	if (nome == "admin" and senha == "1234"){
		cout << "Login bem-sucedido!" << endl;
	} else {
		cout << "Usuário ou senha incorretos" << endl;
	}
	
	return 0;	
}
