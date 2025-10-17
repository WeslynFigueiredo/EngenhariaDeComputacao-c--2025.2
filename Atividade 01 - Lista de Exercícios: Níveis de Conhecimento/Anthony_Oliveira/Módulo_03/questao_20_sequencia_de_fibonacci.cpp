#include <cstdlib>
#include <iostream> 
using namespace std;

int main() {
	int num;
	int fib = 1;
	int anterior_fib = 0;
	int i = 0;
	
	cout << "Digite a posição desejada da sequência Fibonacci" << endl;
	cin >> num;
	cout << "A sequência Fibonacci até a " << num <<"° posição é: " << endl;
	while(i < num){
		if(i == 0){
			cout << anterior_fib << endl;
		} else {
		cout << fib << endl;
		fib = fib + anterior_fib;
		anterior_fib = fib - anterior_fib;
		}
		i = i + 1;
	}
	return 0;
}
