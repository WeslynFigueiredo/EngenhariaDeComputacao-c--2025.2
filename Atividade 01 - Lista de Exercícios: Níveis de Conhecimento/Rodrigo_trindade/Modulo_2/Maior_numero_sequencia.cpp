#include <iostream>

using namespace std;

int main() {
	// int numero, numero1
	// for: for(int i = 0; i < n; i++)
	// while: while(contição != resultado)
	
	// cout << "isso mostra no terminal" << "concatena" << numero;
	// cin << "coleta dados do usuario
	
	int numero, maiornumero, contador = 1;
	
	while (contador <= 5){
		
		cout << "digite o " << contador <<" numero: ";
	
		cin >> numero;
		
		if(numero > maiornumero){
			maiornumero = numero;
		}
		
		contador++;
		
	}
	
	cout << "o maior numero foi " << maiornumero;


	return 0;
}

