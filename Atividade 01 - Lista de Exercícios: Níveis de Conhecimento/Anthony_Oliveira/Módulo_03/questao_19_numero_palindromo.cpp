#include <cstdlib>
#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

int main() {
	string num;
	int i = 0;
	int u;
	bool flag = true;
	cout << "Digite um número" << endl;
	getline(cin, num);
	u = num.length() - 1;
	
	while (i <= u){	
		if ((num[i]) != (num[u])){
			cout << "O número " << num << " não é um palíndromo";
			flag = false;
			break;
		}
		i = i + 1;
		u = u - 1;
	}
	if(flag == true){
		cout << "O número "<< num << " é um palíndromo" << endl;	
	}
	return 0;
}
