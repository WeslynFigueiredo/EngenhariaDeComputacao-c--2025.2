#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "Digite um número inteiro" << endl;
	cin >> num;
	if (num % 2 == 0) {
		cout << "O número " << num << " é par" << endl << endl;
	} else {
		cout << "O número " << num << " é ímpar" << endl << endl;	
	}
	
	return 0;
}
