#include <iostream>;
using namespace std;

int main() {
int nota1, nota2, nota3, media;

cout << "Digite a primeira nota: ";
cin >> nota1;

cout << "Digite a segunda nota: ";
cin >> nota2;

cout << "Digite a terceira nota: ";
cin >> nota3; 

media = (nota1 + nota2 + nota3) / 2;

cout << " A media do aluno foi: " << media << " pontos" << endl;

if (media >= 7) {
	
	cout << "Aprovado" << endl;
	
} else if (media >= 5) {
	
	cout << "Recuperacao" << endl;
} else {
	
	cout << "Reprovado" << endl;
}

return 0;

}
