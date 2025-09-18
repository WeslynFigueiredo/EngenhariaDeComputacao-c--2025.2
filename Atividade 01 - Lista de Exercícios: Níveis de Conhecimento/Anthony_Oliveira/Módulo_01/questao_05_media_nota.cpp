#include <iostream>
using namespace std;

int main(){	
	double nota1;
	double nota2;
	double nota3;
	double media;
	
	cout << "Digite sua primeira nota" << endl;
	cin >> nota1;
	cout << "Digite sua segunda nota" << endl;
	cin >> nota2;
	cout << "Digite sua terceira nota" << endl;
	cin >> nota3;
	media = (nota1 + nota2 + nota3) / 3;
	if (media >= 7){
		cout << "Você foi aprovado!" << endl;
	} else if (media >= 5 and media <= 6.9){
		cout << "Você está de recuperação" << endl;
	} else if (media < 5) {
		cout << "Você foi reprovado" << endl;
	}
	return 0;	
}
