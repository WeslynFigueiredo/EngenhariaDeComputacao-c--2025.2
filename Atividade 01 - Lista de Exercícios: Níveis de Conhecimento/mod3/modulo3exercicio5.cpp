#include <iostream>;
using namespace std;

int main() {

int numero;
int i = 1;

cout << "Digite um numero inteiro: ";
cin >> numero;

cout << "Os divisores de " << numero << "sao: " << endl;

while (i <= numero) {
	
	if (numero % i == 0 ) {
		
		cout << i << endl;
	}
	
	i++;
}

return 0;

}
