#include <iostream>
using namespace std;

int main (){
	int soma = 0;
	int i = 1;
	
	cout << "somando os numeros de 1 a 50." << endl;
	while (i <= 50){
		soma = soma + i;
		i++;
	}
	
	cout << "soma do numeros e:" << soma << endl;
	
	return 0;
}
