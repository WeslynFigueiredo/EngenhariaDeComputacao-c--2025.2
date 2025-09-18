#include <iostream>
using namespace std;

int main(){
	string senha;
	while (true){
		cout << "Digite a senha" << endl;
		cin >> senha;
		if (senha == "senha123"){
			cout << "Login bem-sucedido!" << endl;
			break;
		} else {
			cout << "Senha incorreta. Tente novamente" << endl;
			cout << endl;
		}
	}
	return 0;
}
