#include <iostream>
using namespace std;

int main(){
	int i = 0;
	int soma = 0;
	while (i <= 50){
		soma += i;
		cout << "Soma ate agora: "<<soma<<endl;
		i++;
	}
	cout << "Soma total:" << soma;
}
