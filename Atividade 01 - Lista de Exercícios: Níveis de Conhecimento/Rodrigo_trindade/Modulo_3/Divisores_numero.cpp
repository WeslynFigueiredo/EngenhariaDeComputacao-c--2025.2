#include <iostream>

using namespace std;

int main() {
	
	cout << "Divisores de numeros" << endl;

	for(int i = 0; i < 5; i++){
		
		int numero, contador = 1;
		
		cout << "Digite um numero: ";
		cin >> numero;
			
		while (contador <= numero){
			if (numero % contador == 0){
				cout << contador << " e um divisor de " << numero << endl;
			}
		contador++;
		}
}

	return 0;
}

