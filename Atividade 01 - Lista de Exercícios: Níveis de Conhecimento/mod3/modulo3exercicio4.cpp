#include <iostream>;
using namespace std;

int main() {

double soma = 0;
int quantidade = 0;
double numero;

cout << "--------------------" << endl;
cout << "Media dos numeros" << endl;
cout << "--------------------" << endl;

cout << "--------------------" << endl;
cout << "Digite um valor negativo para parar o programa" << endl;
cout << "--------------------" << endl;

while (true) {

cout << "Digite um valor: ";
cin >> numero;

if (numero < 0) {
	
	break;
}

soma += numero;
quantidade++;

}

if (quantidade > 0) {
	
	double media = soma / quantidade;
	
	cout << "---- Resultado ----" << endl;
	cout << "Quantidade de numeros digitados: " << quantidade << endl;
	cout << "Soma de todos os numeros: " << soma << endl;
	cout << "Media: " << media << endl;
	
} else {
	cout << "Nenhum numero valido foi digitado, tente novamente depois" << endl;
}
	
return 0;

}
