#include <iostream>

using namespace std;

int main(){
	//Maior de dois numeros
	
	int number1, number2;
	
	cout << "Qual e maior? laele\n";
	
	for( int i = 0; i < 3; i++){
	
		cout << "Digite o primeiro numero:  ";
		
		cin >> number1;
		
		cout << "Digite o segundo numero:  ";
		
		cin >> number2;
		
		if (number1 > number2) {
			cout << number1 << " e maior" << endl;
		} else if (number1 < number2) {
			cout << number2 << " e maior" << endl;
		}else{
			cout << "ambos tem mesmo valor" << endl;
		}
	}
	
	return 0;
	
}
