#include <iostream>
using namespace std;
int main(){ 
	int soma = 0;
	int num = 1;
	while (num != 0){
		cout << "digite um numero" << endl;
		cin >> num;
		soma+=num;
	}
	cout << "a soma dos numeros foi: " << soma;
}
