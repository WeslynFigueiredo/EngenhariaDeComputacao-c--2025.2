#include <iostream>

using namespace std;

int main(){

	cout << "---------------------" << endl;
	cout << "-------Tabuada-------" << endl;
	cout << "---------------------" << endl;
	int i = 0;
	int num;
	cout << "Digite um numero: ";
	cin >> num;
	cout << "---------------------" << endl;
	cout << "-------Tabuada do "<< num <<"-------" << endl;
	while(i <=10){
		cout << num << " x " << i << " = " << num*i << endl;
		i++;
	}
	cout << "---------------------" << endl;
	
	return 0;
}
