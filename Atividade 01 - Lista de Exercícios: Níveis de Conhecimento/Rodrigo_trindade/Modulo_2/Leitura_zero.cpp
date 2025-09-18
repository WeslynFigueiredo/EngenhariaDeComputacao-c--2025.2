#include <iostream>

using namespace std;

int main() {

	int numero, soma;
	
	while (numero != 0){
		cout << "Digite um numero: ";
		cin >> numero;
		soma = soma + numero;
	}
	
	cout << "o resultado foi: " << soma;


	return 0;
}

