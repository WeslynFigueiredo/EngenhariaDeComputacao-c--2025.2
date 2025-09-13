#include <iostream>

using namespace std;

int main(){
	cout << "---------------------" << endl;
	cout << "---Fibonacci ate N---" << endl;
	cout << "---------------------" << endl;
	
	int num;
	int fib = 0;
	int seq = 1;
	int prox;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	cout << "---------------------" << endl;
	cout << "---Fibonacci ate " << num <<"---" << endl;
  
	while(num > 0){
		cout << fib << " ";
		prox = fib + seq; 
		fib = seq;
		seq = prox;
		num--;
	}

	return 0;
}
