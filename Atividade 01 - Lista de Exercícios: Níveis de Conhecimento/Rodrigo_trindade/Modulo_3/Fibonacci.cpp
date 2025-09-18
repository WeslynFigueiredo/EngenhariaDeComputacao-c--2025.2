#include <iostream>

using namespace std;

int main() {
	
	cout << "Sequencia de Fibonacci" << endl;
	
	int n, termo = 0, termo2 = 1, proximo, contador = 1;
	
	cout << "quantos termos voce quer de fibonacci? ";
	
	cin >> n;
	
	while (contador <= n) {
        cout << termo << " ";

        proximo = termo + termo2; 
		termo = termo2;
		termo2 = proximo;

        contador++;
    }

	cout << "\nEsses sao os  " << n << " termos de Fibonacci";

	return 0;
}

