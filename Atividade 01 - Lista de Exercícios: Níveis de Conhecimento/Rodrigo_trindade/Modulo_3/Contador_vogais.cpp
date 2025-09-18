#include <iostream>

using namespace std;

int main() {

	string frase;
	int i = 0,contador = 0;
	
	cout << "Contador de vogais"<< endl;
	
	cout << "insira uma frase: ";
	getline(cin, frase); //obtem toda a frase desse jeito
	
	while (i < frase.length()){
		char c = frase[i];
		
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
			contador++;
		}else{
		}
		i++;
	}
	cout << "teve " << contador << " vogais na frase " << frase;

	return 0;
}
