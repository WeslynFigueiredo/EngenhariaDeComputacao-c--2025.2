#include <iostream>

using namespace std;

int main(){
	cout << "-----------------------" << endl;
	cout << "-------Divisores-------" << endl;
	cout << "-----------------------" << endl;
	
	int num;
	int div = 1;
	cout << "Digite um numero: ";
	cin >> num;
	cout << "----------------------------" << endl;
	cout << "-------Divisores de " << num << "-------" << endl;
	
	while(div <= num){
		if(num%div == 0){
			cout << "---" << div << endl;
		}
		div++;
	}
	cout << "----------------------------" << endl;

	return 0;
}
