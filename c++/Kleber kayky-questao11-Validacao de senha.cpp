#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Validação de Senha: Crie um programa que leia uma senha. 
	//O programa deve continuar pedindo a senha até que a senha correta ("senha123") seja digitada. Ao acertar, imprima "Acesso concedido.". 
	string senha;
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"------------- <<Banco Santo Andre>> -------------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	while (senha != "senha123"){
		cout<<"Digite a senha da sua conta: "<< endl;
	    cin>>senha;
	    if (senha != "senha123"){
	    		cout<<"Senha incorreta, tente noavamente."<< endl;
		}
		
	}
	cout<<"Acesso Concedido."<< endl;
	return 0;
}
