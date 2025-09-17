#include <iostream> // Para usar a função cin e cout

using namespace std;

int main(){
	int num;
	cout << "------------------" << endl;
	cout << "---Par ou impar---" << endl;
	cout << "------------------" << endl;
	
	cout << "Digite um número: ";
	cin >> num;
	if(num%2 == 0){
		cout << "Seu numero e par!!!" << endl;
	} else {
		cout << "Seu numero e impar!!!" << endl;
	}
	
	return 0;
}
