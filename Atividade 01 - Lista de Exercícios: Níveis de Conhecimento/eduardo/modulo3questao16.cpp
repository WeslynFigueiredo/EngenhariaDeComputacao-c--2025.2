#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	int numero = 0;
	int soma = 0;
	int quantidade = 0;
	
	cout << "Digite números inteiros (insira um negativo para encerrar o programa): " << endl;
	
	while(true){
		cin >> numero;
		if (numero < 0){
			break;
		}
		
		soma += numero;
		quantidade++;
	}
	
	if(quantidade > 0){
		double media = (double)soma/quantidade;
		cout << "Média: " << media << endl;
		cout << "Quantidade de números digitados: " << quantidade << endl;
	} else {
		cout << "Nenhum número válido foi digitado." << endl;
	}
  	return 0;
  }

