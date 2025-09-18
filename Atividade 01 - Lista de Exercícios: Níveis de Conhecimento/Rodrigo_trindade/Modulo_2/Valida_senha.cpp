#include <iostream>

using namespace std;

int main() {
	// int numero, numero1
	// for: for(int i = 0; i < n; i++)
	// while: while(contição != resultado)
	
	// cout << "isso mostra no terminal" << "concatena" << numero;
	// cin << "coleta dados do usuario

	string senha = "senha123", tentativa;
	
	while(tentativa != senha){
		cout << "insira sua senha: ";
		cin >> tentativa;
		
		if (tentativa != senha){
			cout << "Senha incorreta, tente novamente!" << endl;
		}
	}
	
	cout << "Acesso garantido";
	
	return 0;
}

