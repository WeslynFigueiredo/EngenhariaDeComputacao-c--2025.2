#include <iostream>

using namespace std;

int main(){
	//Par ou impar
	int number;
	
	cout << "Saber se o numero e par ou impar\n";
	
	for( int i = 0; i < 3; i++){
	
		cout << "Digite um numero:  ";
		
		cin >> number;
		
		if (number % 2 == 0) {
			cout << "O numero e par" << endl;
		
		} else {
			cout << "o numero e impar" << endl;
			
		}
	}
	
	return 0;
	
}
