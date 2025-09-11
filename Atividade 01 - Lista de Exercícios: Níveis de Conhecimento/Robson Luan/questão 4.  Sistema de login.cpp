#include <iostream>
using namespace std;

int main (){ 
  string a;
	string b;
	
	cout << "login " << endl;
	
	cout << "informe o usuario " << endl;
	cin >> a;
	
	cout << "informe sua senha " << a << endl;
	cin >> b;
	
	if (a == "admin" && b == "1234") {
		cout << "login bem sucedido!" << endl;
	} 
	else {
		cout << "usuario ou senha invalidos." << endl;
	}
	return 0; 

}
