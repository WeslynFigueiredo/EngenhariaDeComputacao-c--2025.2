#include <iostream>

using namespace std;

int main() {

	
	int number, soma = 0;
	
	cout << "Contagem Regresiva de 1 a 50: \n";
	
	while(number <= 50){
		soma = soma + number;
		number++;
	}
	
	cout << "o resultado foi: " << soma <<endl;
	
	return 0;
}

