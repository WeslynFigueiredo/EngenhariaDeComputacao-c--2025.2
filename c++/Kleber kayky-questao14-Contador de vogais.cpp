#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string texto;
	int contador = 0;
	
	cout << "Digite uma frase: ";
	getline(cin, texto);
	
	for (size_t i= 0; i < texto.length(); ++i){
		//evita UB com caracteres negativos
		unsigned char ch = static_cast<unsigned char >(texto[i]);
		
		ch = static_cast< unsigned char > (tolower(ch));
		
		if(ch == 'a'|| ch == 'e' || ch == 'i' || ch =='o' || ch == 'u'){
			contador++;
		}
	}
	cout << "Quantidade de vogais: " << contador << endl;
	
	return 0;
}
