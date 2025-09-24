#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Digite um valor de N: ";
	cin >> n;
	
	if(n <= 0){
		cout<<"Valor invalido!"<< endl;
		return 0;
	}
	long long a = 0, b = 1;
	cout<<"Sequencia de Fibonacci com "<< n << " termos: ";
	
	for(int i = 1; i <= n; i++){
		cout<< a << " ";
		long long proximo = a + b;
		a = b;
		b = proximo;
	}
	cout<< endl;
	return 0;
}
