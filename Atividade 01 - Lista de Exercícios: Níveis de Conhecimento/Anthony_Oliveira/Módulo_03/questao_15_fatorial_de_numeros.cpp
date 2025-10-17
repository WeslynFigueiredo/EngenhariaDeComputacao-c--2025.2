#include <cstdlib>
#include <iostream> 
using namespace std;

int main() {
	int resultado = 1;
	int num;
	
	cout << "Digite um número" << endl;
	cin >> num;
	
	while(num > 0){
		resultado = resultado * num;
		num = num - 1;
	}
	
	cout << "O fatorial do número é: " << resultado << endl;
	
	return 0;
}
