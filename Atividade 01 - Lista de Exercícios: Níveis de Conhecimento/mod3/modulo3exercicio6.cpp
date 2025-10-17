#include <iostream>;
using namespace std;

int main() {

int numero;
int soma = 0;
int digito;

cout  << "Digite um numero inteiro: ";
cin >> numero;

if (numero < 0) {
	
	numero = -numero;
}

while (numero > 0) {
	
	digito = numero % 10;
	
	soma = soma + digito;
	
	numero = numero / 10;
}

cout << "A soma dos digitos eh " << soma << endl;

return 0;

}
