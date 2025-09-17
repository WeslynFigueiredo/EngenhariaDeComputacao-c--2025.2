#include <iostream>

using namespace std;

int main(){
	cout << "-------------------------------------" << endl;
	cout << "----------Media de n notas-----------" << endl;
	cout << "-------------------------------------" << endl;
	
	double media;
	double soma;
	double nota;
	int contador;
	
	cout << "-------------------------------------" << endl;
	cout << "-Para parar digite um valor negativo-" << endl;
	cout << "-------------------------------------" << endl;
	while(true){
		cout << "Digite uma valor: ";
		cin >> nota;
		cout << "-------------------------------------" << endl;
		if(nota >= 0){
			soma = soma + nota;
			contador++;
		} else {
			break;
		}
	}
	media = soma/contador;
	
	cout << "A media e de: " << media;
	return 0;
}
