#include <iostream>;
using namespace std;

int main() {
int numero;
	
cout << "Informe um numero inteiro: ";
cin >> numero;

if (numero % 2 == 0){
	cout << "O numero " << numero << " e um numero par";
} else {
	cout << "O numero " << numero << " e numero impar";
}

return 0;

}
