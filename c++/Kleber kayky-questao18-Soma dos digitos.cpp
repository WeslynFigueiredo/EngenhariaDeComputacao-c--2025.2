#include <iostream>
using namespace std;

int main (){
	int n , soma = 0;
	cout << "Digite um numero inteiro: "<< endl;
	cin >> n;
	
	int temp = n;
	if (temp < 0) temp = -temp;
	
	while(temp > 0){
		soma += temp % 10;
		temp /= 10;
	}
	cout << "A soma dos digitos de "<< n << " = "<< soma << endl;
	return 0;
}
