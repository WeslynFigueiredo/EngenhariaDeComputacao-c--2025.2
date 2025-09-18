#include <iostream>;
using namespace std;

int main() {
int numero;
int maiornumero = 0;
int contador = 0;

cout << "Digite 5 numeros: ";

while (contador < 5) {
	
	cout << "Numero" << contador + 1 << ":";
	cin >> numero;
	
	if (numero > maiornumero) {
		maiornumero = numero;
	}
	
	contador++;	
}

cout << "O maior numero digitado foi: " << maiornumero << endl;

return 0;

}
