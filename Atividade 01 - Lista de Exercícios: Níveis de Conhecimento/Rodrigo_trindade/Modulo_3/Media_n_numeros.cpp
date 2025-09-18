#include <iostream>

using namespace std;

int main() {
	cout << "Media de n numeros (para sair, digite um numero negativo)"<< endl;

	double numeros, soma = 0, media = 0, quantidade = 0;
	
	while (numeros >= 0){
		cout << "digite um numero: ";
		cin >> numeros;
		
		soma = soma + numeros;
		quantidade++;
	}

	media = soma / quantidade;
	
	cout << "a media foi de " << media << " com " << quantidade-1 << " numeros digitados." << endl;

	return 0;
}

