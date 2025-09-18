#include <iostream>

using namespace std;

int main() {


	int numero, resultado, i = 1;
	
	cout << "Tabuada de 1 a 10 de um numero."<<endl;
	
	for (int j = 1; j <= 3; j++){
		
		cout << "Digite um numero: ";
		cin >> numero;
		
			while (i <= 10){	
				resultado = numero * i;
				
				cout << numero << " * " << i << " = " << resultado << endl;
				
				i++;
			}
	i = 1;
}


	return 0;
}

