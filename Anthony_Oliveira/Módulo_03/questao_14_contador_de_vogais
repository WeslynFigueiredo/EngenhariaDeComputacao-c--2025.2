#include <cstdlib>
#include <iostream> 
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
	string frase;
	string check;
	int i = 0;
	int resultado = 0;
	
	cout << "Digite uma frase" << endl;
	getline(cin, frase);	
	transform(frase.begin(), frase.end(), frase.begin(), ::tolower);

	while(i <= frase.length()){
		check = frase[i];	
		if (check == "a" or check == "e" or check == "i" or check == "o" or check == "u"){
			resultado = resultado + 1; 
		}
		i = i + 1;
	}
	cout << "O total de vogais na frase é " << resultado << endl;
	
	return 0;	
}
