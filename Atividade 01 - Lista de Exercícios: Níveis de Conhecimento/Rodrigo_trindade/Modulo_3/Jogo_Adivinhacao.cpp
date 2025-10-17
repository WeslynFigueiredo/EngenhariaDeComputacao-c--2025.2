#include <iostream>

using namespace std;

int main() {
	// int numero, numero1
	// for: for(int i = 0; i < n; i++)
	// while: while(contição != resultado)
	
	// cout << "isso mostra no terminal" << "concatena" << numero;
	// cin << "coleta dados do usuario

	int secreto = 78, adivinha;
	
	cout << "Adivinha o numero secreto:" << endl;
	
		while (adivinha != secreto){
			cout << "De o seu palpete: ";
			
			cin >> adivinha;
			if (adivinha < secreto){
				cout << "o seu palpite e menor que o numero secreto, tente novamente" << endl;
			}else if (adivinha > secreto){
				cout << "o seu palpite e maior que o numero secreto, tente novamente" << endl;
			} else {
				cout << "parabens, voce acertou!";
			}
		}
	
	return 0;
}

