#include <iostream>
using namespace std;

int main(){	
	int i = 1;
	int soma;
	while(i < 51){
		soma = soma + i;
		i = i + 1;
	} 
	cout << "A soma é " << soma << endl;
	return 0;	
}
