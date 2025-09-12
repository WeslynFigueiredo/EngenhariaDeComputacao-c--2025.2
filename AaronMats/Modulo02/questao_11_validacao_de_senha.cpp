#include <iostream>

using namespace std;

int main(){
	
	cout << "--------------------------------" << endl;
	cout << "-------Validacao de senha-------" << endl;
	cout << "--------------------------------" << endl;
	string senha;
	
	while(true){
		cout << "Digite a senha: ";
		cin >> senha;
		if (senha == "senha123"){
			cout << "Acesso concedido";
			break;
		} else {
			cout << "Acesso Negado" << endl;
			cout << "--------------------------------" << endl;
		}
	}
		
	return 0;
}
