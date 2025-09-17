#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "-------------------------" << endl;
	cout << "---Numeros Palindromos---" << endl;
	cout << "-------------------------" << endl;
	
	string num;
	int dig;
	int rep;
	bool pali = true;
	int i = 0;
	
	cout << "Digite um numero: ";
	cin >> num;
	rep = num.length();
	
	while(pali){
		char j = num[rep - 1];
		char f = num[i];	
		if(i < rep){
			if(j == f){
				pali = true;
				break;
			} else {
				pali = false;
				break;
			}	
		}else{
			break;
		}
		rep--;
		i++;
	}
	
	if (pali){
		cout << "O numero digitado e um palindromo" << endl;
	} else {
		cout << "O numero digitano nao e um palindromo" << endl;
	}

	return 0;
}
