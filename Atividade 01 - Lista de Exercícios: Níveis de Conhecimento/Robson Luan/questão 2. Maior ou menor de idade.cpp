#include <iostream>

using namespace std;

int main (){
  int numero;
	
	cout << "informe a sua idade" << endl;
	cin >> numero;
	
	if ( numero > 17) { 
		cout << "voce e maior de idade" << endl;
	}
	else {
		cout << "voce e menor de idade" << endl;
	}
	
	return 0;
}
