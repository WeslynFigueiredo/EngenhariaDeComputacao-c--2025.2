#include <iostream>

using namespace std;

int main(){
	
	cout << "------------------------" << endl;
	cout << "-------Maior de 5-------" << endl;
	cout << "------------------------" << endl;
	int num[4];
	int i = 0;
	int maior = 0;
	while(i < 5){
		cout << "Digite um numero: ";
		cin >> num[i];
		i++;
		cout << "------------------------" << endl;
	}
	i = 0;
	while(i < 5){
		if(maior <= num[i]){
			maior = num[i];
		}
		i++;
	}
	cout << "O maior numero digitado e: " << maior << endl;
		
	return 0;
}
