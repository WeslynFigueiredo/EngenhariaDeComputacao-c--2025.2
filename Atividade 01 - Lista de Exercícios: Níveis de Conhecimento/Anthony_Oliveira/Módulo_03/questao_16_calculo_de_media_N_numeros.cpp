#include <cstdlib>
#include <iostream> 
using namespace std;

int main() {
	int resultado = 0;
	int i = 0;
	int num;

	while (true){
		cout << "Digite o " << (i+1) << "° número" << endl;
		cin >> num;
		if (num < 0){
			break;
		}	
		resultado = resultado + num;
		i = i + 1;
	}
	
	if(i == 0){
		cout << "Não há números para calcular a média" << endl;
	} else {
	resultado = resultado / i;
	cout << "A média dos números é: " << resultado << endl;
	}
	
	return 0;
}
