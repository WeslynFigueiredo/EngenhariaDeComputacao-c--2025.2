#include <iostream>
using namespace std;

int main(){
	int i = 1;
	int num;
	int resultado;
	cout << "Digite um número" << endl;
	cin >> num;
	while (i < 11) {
		resultado = num * i;
		cout << num << " X " << i << " = " << resultado << endl;
		i = i + 1;
	}
	return 0;
}
