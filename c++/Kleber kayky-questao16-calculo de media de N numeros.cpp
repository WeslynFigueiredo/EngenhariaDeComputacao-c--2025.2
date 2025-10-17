#include <iostream>
using namespace std;

int main (){
	int n;
	double num, soma = 0;
	
	cout<< "Quantos numeros voce quer calcular a media? "<< endl;
	cin >> n;
	
	if (n <= 0){
		cout<< "Quantidade invalida!!"<< endl;
		return 0;
	}
	
	int contador = 1;
	while (contador <= n){
		cout<<"Digite o "<< contador << " numero: "<< endl;
		cin >> num;
		
		soma += num;
		contador++;
	}
	
	double media = soma / n;
	
	cout<<"A media dos "<< n << " numeros e: "<< media << endl;
	return 0;
}
