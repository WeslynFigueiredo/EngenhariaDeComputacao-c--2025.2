#include <iostream> // Para usar a função cin e cout

using namespace std;

int main(){
	int num1;
	int num2;
	cout << "------------------" << endl;
	cout << "---Qual e Maior---" << endl;
	cout << "------------------" << endl;
	
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	if(num1 > num2){
		cout << num1 << " e maior que " << num2 << endl;
	} else if(num2 > num1){
		cout << num2 << " e maior que " << num1 << endl;
	} else {
		cout << "Os numeros sao iguais!" << endl;
	}
	
	return 0;
}
