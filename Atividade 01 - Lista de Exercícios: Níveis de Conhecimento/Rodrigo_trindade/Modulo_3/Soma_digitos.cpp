#include <iostream>

using namespace std;

int main() {
	
	cout << "Soma de digitos" << endl;
	
	for(int i = 0; i < 5; i++){
		
		int numero, soma = 0;
		
		cout << "Digite um numero inteiro: ";
		    cin >> numero;
		
		    while (numero > 0) {
		        int digito = numero % 10; // pega o �ltimo d�gito
		        soma = soma + digito;     // soma o d�gito
		        numero = numero / 10;     // remove o �ltimo d�gito
		    }
		
		    cout << "A soma dos digitos foi: " << soma << endl;
	}
	return 0;
}

