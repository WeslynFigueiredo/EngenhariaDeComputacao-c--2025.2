#include <iostream>;
#include <string>;
#include <cctype>;

using namespace std;

int main() {

string frase;
int contar_vogais = 0;
int i = 0;

cout << "Digite uma frase curta: ";
cin >> frase;

while (i < frase.length()){
	
	char caractere = frase[i];
	
	caractere = tolower(caractere);
	
	if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
		
		contar_vogais++;
	}
	
	i++;
}

cout << "A frase tem " << contar_vogais << " vogais." << endl;

return 0;

}
