#include <cstdlib>
#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

int main() {
	string num;
	int i = 0;
	int resultado = 0;
	
	cout << "Digite um número" << endl;
	getline(cin, num);
	while (i < num.length()){	
		resultado = resultado + (int(num[i]) - '0');
		i = i + 1;
	}
	cout << "A soma dos dígitos desse número é: " << resultado << endl; 
	
	return 0;
}
