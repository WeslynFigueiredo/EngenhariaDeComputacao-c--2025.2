#include <iostream>;
#include <string>;
using namespace std;

int main() {
string senhacorreta = "senha123";
string senhadigitada;


while (senhadigitada != senhacorreta){
	
	cout << "Digite sua senha: ";
	
	cin >> senhadigitada;

}

cout << "Acesso concedido" << endl;

return 0;

}

