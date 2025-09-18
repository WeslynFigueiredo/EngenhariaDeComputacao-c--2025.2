#include <iostream>

using namespace std;

int main(){
	// Maior ou menor de idade
	
	int idade;
	
	cout << "Maior ou menor de idade?\n";
	
	for( int i = 0; i < 3; i++){
	
		cout << "Digite sua idade:  ";
		
		cin >> idade;
		
		if (idade >= 18) {
			cout << "Maior de idade" << endl;
		
		} else {
			cout << "Menor de idade" << endl;
			
		}
	}
	
	return 0;
	
}
