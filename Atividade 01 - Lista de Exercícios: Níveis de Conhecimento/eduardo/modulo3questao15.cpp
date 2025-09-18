#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero = 0;
	int fatorial = 1;
	
	cout << "Digite um número inteiro positivo: " << endl;
	cin >> numero;
	
	if (numero < 0){
		cout << "Fatorial não definido para números negativos." << endl;
	} else {
		int i = numero;
		while(i > 1){
			fatorial *= i;
			i--;
		}
		
		cout << "Fatorial de " << numero << "é: " << fatorial << endl;
	}
  	return 0;
  }

