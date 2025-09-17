#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "----------------------" << endl;
	cout << "---Soma dos Digitos---" << endl;
	cout << "----------------------" << endl;
	
	string num;
	int rep;
	int dig;
	int soma = 0;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	rep = num.length();
	
	while(rep > 0){
		char c = num[rep - 1];
		dig = int(c) - '0';
		soma = soma + dig;
		rep--;
		
	}
	cout << "A Soma dos digitos de " << num << " e igual a " << soma << endl;

	return 0;
}
