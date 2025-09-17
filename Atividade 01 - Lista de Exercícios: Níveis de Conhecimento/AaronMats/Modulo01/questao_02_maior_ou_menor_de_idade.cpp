#include <iostream> // Para usar a função cin e cout

using namespace std;

int main(){
	int idd;
	cout << "-----------------" << endl;
	cout << "---Maior idade---" << endl;
	cout << "-----------------" << endl;
	
	cout << "Digite sua idade: ";
	cin >> idd;
	if(idd >= 18){
		cout << "Voce e maior de idade" << endl;
	} else {
		cout << "Voce e menor de idade" << endl;
	}
	
	return 0;
}
