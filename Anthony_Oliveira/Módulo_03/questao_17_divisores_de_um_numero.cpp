#include <cstdlib>
#include <iostream> 
using namespace std;

int main() {
	int num;
	int i = 1;
	
	cout << "Digite um número" << endl;
	cin >> num;	
	cout << "Os divisores desse número são:" << endl;
	while (i <= num){
		if (num % i == 0){
			cout << i << endl;
		}
		i = i + 1;
	} 

	return 0;
}
