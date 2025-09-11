#include <cstdlib>
#include <iostream> 
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int num_sistema = rand() % 100;
	int num_user;
	while(true) {
		cout << "Digite um Número" << endl;
		cin >> num_user;
		if (num_user == num_sistema){
			cout << "Parabéns! Você acertou o número" << endl;
			break;
		} else if (num_user > num_sistema) {
			cout << "Você errou! A sua escolha é maior que o número" << endl;
		} else {
			cout << "Você errou! A sua escolha é menor que o número" << endl;
		}
	}
	return 0;
}
