#include <iostream>
using namespace std;

int main(){
	double num;
	while(true){
		cout << "Digite um número" << endl;
		cin >> num;
		cout << endl;
			if (num == 0) {
				cout << "Obrigado por usar o programa!" << endl;
				break;	
			}
		}
	return 0;
}
