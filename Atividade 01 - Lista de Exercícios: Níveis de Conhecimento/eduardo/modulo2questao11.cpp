#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  string senha;
  int numerodigitado;
  
  	  cout << "Boas-vindas!";
	  cout << "Insira a senha: ";
	  cin >> senha;
  while(senha != "senha123"){
	  cout << "Senha errada, coloque a senha: ";
  	  cin >> senha;
  }
  cout << "Acesso concedido!";
return 0;
}
