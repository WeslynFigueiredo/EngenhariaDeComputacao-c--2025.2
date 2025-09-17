#include <iostream>

using namespace std;

int main(){
	double nota1;
	double nota2;
	double nota3;
	double media;
	cout << "-------------------" << endl;
	cout << "-------Media-------" << endl;
	cout << "-------------------" << endl;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	cout << "Digite a segunda nota: ";
	cin >> nota3;
	media = (nota1 + nota2 + nota3)/3;
	if(media >= 7){
		cout << "Aprovado!" << endl;
	} else if(media < 5){
		cout << "Reprovado!" << endl;
	} else {
		cout << "Recuperacao!" << endl;
	}
	
	return 0;
}
