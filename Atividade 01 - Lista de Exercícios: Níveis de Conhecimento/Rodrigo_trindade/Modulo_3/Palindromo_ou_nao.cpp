#include <iostream>

using namespace std;

int main() {
	
	cout << "Palindromo ou nao." << endl;
	
	for(int i = 0; i < 5; i++){
		
		int numero, original, inverso = 0;
		
		cout << "Digite um numero: ";
		
		cin >> numero;
		
		original = numero;
		
		while(numero > 0){
			int digito = numero % 10;
			inverso = inverso * 10 + digito;
			numero = numero / 10;
		}
		
		if (inverso == original){
			cout << "o numero " << original << " e um palindromo (igual em ambos os lados)" << endl;
		} else {
			cout << "o numero " << original << " nao e um palindromo" << endl;
		}
	}

	return 0;
}

