#include <iostream>

using namespace std;

int main() {

	cout << "Fatorial de um numero" <<endl;
	for(int j; j < 3; j++){
		int numero, i = 1, resultado = 1;
		cout << "Digite um numero: ";
		cin >> numero;
		
		while(i <= numero){
			resultado = resultado * i;
			i++;
		}
		cout << "O resultado fatorial de " << numero << " foi " << resultado << "." << endl;
}
	return 0;
}

