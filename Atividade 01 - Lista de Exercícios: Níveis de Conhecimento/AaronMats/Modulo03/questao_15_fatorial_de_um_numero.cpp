#include <iostream>

using namespace std;

int main(){
	cout << "------------------------" << endl;
	cout << "--------Fatorial--------" << endl;
	cout << "------------------------" << endl;
	
	int num;
	int fatorial = 1;
	
	cout << "Digite um numero: ";
	cin >> num;
	int i = num;
	while(i != 1){
		fatorial = fatorial * i;
		i--;
	}
	cout << "------------------------" << endl;
	cout << "O fatorial de " << num << " e " << fatorial << endl;
	return 0;
}
