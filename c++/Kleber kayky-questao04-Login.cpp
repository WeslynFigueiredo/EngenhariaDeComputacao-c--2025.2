#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Sistema de Login Simples: Crie um algoritmo para um sistema de login.
	// O programa deve pedir um nome de usuário e uma senha. 
	//Se o usuário for "admin" e a senha for "1234", imprima "Login bem-sucedido!". Em qualquer outro caso, imprima "Usuário ou senha incorretos".nt num; 
	string usuario;
	string senha;
	cout<<"------------------------------------------------"<< endl;
	cout<<"----------- <<CAIXA ECONOMICA>> ----------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	cout<<"Insira seu nome de usuario: "<< endl;
	cin >> usuario;
	
	cout<<"Insiara sua senha: "<<endl;
	cin >> senha;
	if (usuario == "admim" and senha == "1234"){
		cout<<"Login bem-sucedido! "<< endl;
	} else {
		cout<<"Usuario ou senha incorretos."<< endl;
	}
	return 0;
}
