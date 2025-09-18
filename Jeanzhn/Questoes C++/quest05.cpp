#include <iostream>
#include <string>

using namespace std;

int main() {
	float nota1, nota2, nota3 , media;
	cout << "coloque a primeira nota: ";
	cin >> nota1;
	cout << "coloque a segunda nota: ";
	cin >> nota2;
	cout << "coloque a terceira nota: ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3)/3;
	cout << "Sua media " << media << endl;
	if (media >= 7.0){
		cout << "APROVADO"<< endl;
	} else if (5 <= media && media <= 6.9){
		cout << "Recuperacao" <<endl;
	} else {
		cout << "REPROVADO" <<endl;
	}
}
