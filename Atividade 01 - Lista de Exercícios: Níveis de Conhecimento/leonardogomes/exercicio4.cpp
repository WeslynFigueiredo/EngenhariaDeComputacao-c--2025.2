#include <iostream>;
#include <string>
using namespace std;

int main() {
	string usuario, senha;
	
	cout << "Digite o nome do usuario: ";
	cin >> usuario;
	
	cout << "Insira sua senha: ";
	cin >> senha;
	
	if (usuario == "admin" && senha == "1234") {
		cout << "Login feito com sucesso!";
	} else {
		cout << "Usuario ou senha incorretos.";
	}


}
