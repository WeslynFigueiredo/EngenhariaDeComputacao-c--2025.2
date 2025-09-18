#include <iostream>
using namespace std;

int main(){
	int i = 2;
	int num;
	int nextnum;
	
	cout << "Digite o 1° número" << endl;
	cin >> num;
	while (i < 6){
		cout << "Digite o " << i << "° número" << endl;
		cin >> nextnum;
		if (nextnum >= num){
			num = nextnum;
		}
		i = i + 1;
	}
	cout << "O maior número da sequência é " << num << endl;

	return 0;
}
