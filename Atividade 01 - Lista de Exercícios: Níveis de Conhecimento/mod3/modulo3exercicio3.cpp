#include <iostream>;
using namespace std;

int main() {

int numero;
int fatorial = 1;

cout << "Insira um numero: ";
cin >> numero;

int i = numero;

while (i != 1) {
	
	fatorial = fatorial * i;
	i--;
}

cout << "O fatorial de " << numero << "eh" << fatorial << endl;
return 0;

}
