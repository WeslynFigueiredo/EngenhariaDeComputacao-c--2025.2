#include <iostream>

using namespace std;

int main(){

	cout << "---------------------------" << endl;
	cout << "-------Leitura ate 0-------" << endl;
	cout << "---------------------------" << endl;
	int i = 1;
	int soma;
	while(i != 0){
		cout << "Digite um numero(digite 0 para para): ";
		cin >> i;
		soma = soma + i;
	}
	cout << "A soma dos números digitados e: " << soma << endl;
	
	return 0;
}
