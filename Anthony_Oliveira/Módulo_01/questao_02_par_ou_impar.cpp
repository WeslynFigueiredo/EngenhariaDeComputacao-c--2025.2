#include <iostream>
using namespace std;

int main(){
	int idade;
	cout << "Digite sua idade" << endl;
	cin >> idade;
	if (idade >= 18){
		cout << "Você é maior de idade" << endl;
	}
	if (idade < 18) {
		cout << "Você é menor de idade" << endl;
	}
	return 0;
}
