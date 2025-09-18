#include <iostream>

using namespace std;

int main() {

	double nota1, nota2, nota3;

	cout << "Aprovado ou nao?\n";
	
	for (int i = 0; i < 5; i++)	{
		cout << "Insira a primeira nota: ";
		cin >>  nota1;
		
		cout << "Insira a segunda nota: ";
		cin >>  nota2;
		
		cout << "Insira a terceira nota: ";
		cin >>  nota3;
		
		double soma = nota1 + nota2 + nota3, resultado = soma / 3;
		
		if(resultado >= 7){
			cout << "aprovado! " << "(" << resultado << ")" << endl;
		} else if (resultado < 7 && resultado >= 5){
			cout << "recuperacao! " << "(" << resultado << ")" << endl;	
		}else{
			cout << "reprovado! " << "(" << resultado << ")" << endl;
		}
	}
	
	return 0;
}
