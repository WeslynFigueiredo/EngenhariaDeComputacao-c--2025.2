#include <iostream>

using namespace std;

int main() {
	
	//Login
	
	string login, senha, logcerto = "admin", senhacerto = "1234";
	
	bool logado = false;
	
	cout << "Login e senha\n";
	
	while(logado == !true){
		
		cout << "insira seu login e senha\n";
		
		cout << "Login: ";
		cin >> login;
		
		cout << "Senha: ";
		cin >> senha;
	
		if (login == logcerto && senha == senhacerto){
			cout << "Login bem sucedido" << endl;
			logado = true;
		} else {
			cout << "Login ou senha invalidos\n" << endl;
		}
	}


	return 0;
}

