#include <iostream>
using namespace std;

int main(){
	int num_user;
	int num_check;
	int sair = 0;
	while(true){
		cout << "Digite um número inteiro" << endl;
		cin >> num_user;
		num_check = num_user;
		if (num_check % 2 == 0) {
			cout << "O número " << num_user << " é par" << endl << endl;
			cout << "Deseja sair do programa?" << endl << "Digite 1 se sim"	<< endl;
			cin >> sair;
			cout << endl;
			if (sair == 1) {
				cout << "Obrigado por usar o programa!" << endl;
				break;
			}
		} 
		if (num_check % 2 != 0){
			cout << "O número " << num_user << " é ímpar" << endl << endl;
			cout << "Deseja sair do programa?" << endl << "Digite 1 se sim"	<< endl;
			cin >> sair;
			cout << endl;
			if (sair == 1) {
				cout << "Obrigado por usar o programa!" << endl;
				break;	
			}
		}
	}
}
