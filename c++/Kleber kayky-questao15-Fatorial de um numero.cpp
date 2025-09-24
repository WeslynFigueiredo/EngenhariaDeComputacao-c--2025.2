#include <iostream>
using namespace std;

int main(){
	int n;
	unsigned long long fatorial = 1;
	
	cout << "Digite um numero natural: "<< endl;
	cin >> n;
	
	if (n < 0){
		cout << "Fatorial nao existe para numeros negativos!"<< endl;
		return 0;
	}
	int i = n;
	while (i > 1){
		fatorial *= i;
		i--;
	}
	cout <<"! = " << fatorial << endl;
	return 0;
}
