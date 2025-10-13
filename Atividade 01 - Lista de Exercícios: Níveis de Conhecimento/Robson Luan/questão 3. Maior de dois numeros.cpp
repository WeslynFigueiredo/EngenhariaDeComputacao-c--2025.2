#include <iostream>
using namespace std;

int main (){
  int a;
	int b;
	
	cout << "escolha dois numeros e diremos qual deles e maior" << endl;
	
	cout << "escolha o primeiro numero" << endl;
	cin >> a;
	
	cout << "escolha o segundo numero" << endl;
	cin >> b;
	
	if (a > b) {
		cout << "o numero " << a << " e o maior dos dois." << endl;
	}
	else if (a < b){
		cout << " o numero " << b << " e o maior dentre os dois." << endl;
	}
	else if (a == b) {
		cout << " os numeros " << a << " e " << b << " sao iguais." << endl;
	}
	return 0;
}
