#include <iostream>;
using namespace std;

int main() {

int numero, original, invertido = 0;

cout << "Digite um numero inteiro: ";
cin >> numero;

original = numero;

while (numero > 0) {
	
	int digito = numero % 10;
	
	invertido = (invertido * 10) + digito;
	
	numero = numero / 10;
}

if (original == invertido) {
	
	cout << "O numero " << original << "eh um numero palindromo" << endl;
} else {
	
	cout << "O numero " << original << "nao eh um numero palindromo" << endl;
}

return 0;

}
