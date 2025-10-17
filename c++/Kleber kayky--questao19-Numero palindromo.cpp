#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Digite um numero inteiro: "<< endl;
	cin>> n;
	
	int original = n;
	if(n < 0){
		cout<<"Numeros negativos nao sao considerados palindromos!"<< endl;
		return 0;
	}
	
	int reverso = 0;
	while (n > 0){
		reverso = reverso * 10 + (n % 10);
		n /= 10;
	}
	if (original == reverso){
		cout << original << " e um numero palindromo."<< endl;
	} else {
		cout << original << " nao e um numero palindromo."<< endl;
	}
	return 0;
}
