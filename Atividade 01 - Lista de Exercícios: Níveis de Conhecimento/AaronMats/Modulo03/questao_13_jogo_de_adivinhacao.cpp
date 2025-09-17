#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	int tentativa = 0;
	srand(time(0));
    int resultado = rand() % 100 + 1;
    int palpite;
    
	cout << "--------------------------" << endl;
	cout << "----Jodo da Advinhacao----" << endl;
	while (true){
		cout << "--------------------------" << endl;
		cout << "Digite um valor entre 1 e 100: ";
		cin >> palpite;
	
		if (palpite == resultado){
			cout << "Palpite correto!!!" << endl;
			tentativa++;
			cout << "N de tentativas: " << tentativa << endl;
			cout << "\(>o<)/" << endl;
			break;
		} else if (palpite > resultado){
			cout << "E um numero menor" << endl;
			cout << " (/#-_-)/" << endl;
			tentativa++;
		} else {
			cout << "E um numero maior" << endl;
			cout << " (/#-_-)/" << endl;
			tentativa++;
		}
	}
	return 0;
}
