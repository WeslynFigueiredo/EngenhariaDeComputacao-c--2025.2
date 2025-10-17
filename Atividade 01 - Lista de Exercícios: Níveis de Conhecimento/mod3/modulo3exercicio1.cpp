#include <iostream>;
using namespace std;

int main() {

const int numero_secreto = 42;
int palpite = 0;

cout << "Voce esta jogando o jogo da adivinhação!" << endl;

while (palpite != numero_secreto) {
	
	cout << "Qual eh o seu palpite? ";
	cin >> palpite;
	
	if (palpite > numero_secreto) {
		
	cout << "O numero eh menor" << endl;
			
} else if (palpite < numero_secreto) {
	
	cout << "O numero eh maior" << endl;
} else {
	
	cout << "Parabens! Voce acertou o numero!" << endl;
}

}
	
return 0;

}
