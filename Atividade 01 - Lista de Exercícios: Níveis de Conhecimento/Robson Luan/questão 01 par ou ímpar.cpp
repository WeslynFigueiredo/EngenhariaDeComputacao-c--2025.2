#include <iostream>

using namespace std;

Int main (){
  	int numero;
	
	cout << "escolha um número e diremos se ele é impar ou par" << endl;
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "O numero escohido e par" << endl;
	}	
	else { cout << "o numero escolhido e impar" << endl;
	}
	
	return 0;	
} 
