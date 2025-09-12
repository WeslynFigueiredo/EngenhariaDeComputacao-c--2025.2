#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main(){
	cout << "--------------------------" << endl;
	cout << "----Contador de Vogais----" << endl;
	cout << "--------------------------" << endl;
	string frase;
	int contador = 0;
	cout << "Digite uma frase: ";
	getline(cin, frase);
	
	int i = frase.length();
	while(i != -1){
		char c = tolower(frase[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			contador++;
		}
		i--;
	}
	cout << "--------------------------" << endl;
	cout << "Numero de vogais: " << contador << endl;

	return 0;
}
