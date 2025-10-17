#include <iostream>;
using namespace std;

int main() {

int numero;
int soma = 0;

cout << "Digite um numero: ";

while (true) {
	
	cin >> numero;
	
	if (numero == 0) {
		
		break;
	
}
	
	soma += numero;
		
}


cout << "A soma de todos os numeros inseridos eh: " << soma << endl;


return 0;

}
