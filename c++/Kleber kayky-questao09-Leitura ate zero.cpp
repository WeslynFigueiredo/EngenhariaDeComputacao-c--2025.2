#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Leitura at� Zero: Fa�a um programa que pe�a ao usu�rio para digitar n�meros.
	//O programa deve parar quando o usu�rio digitar o n�mero 0. Ao final, imprima a soma de todos os n�meros digitados (excluindo o 0)
	int num; 
	int soma;
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"----------- <<Somar ate encher o saco>> ----------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	while (num != 0){
		cout<<"Insira um numero inteiro: "<< endl;
	    cin >> num;
		soma = soma + num;
	}
	cout<<"A soma dos numeros inseridos foi "<<soma<<endl;
	return 0;
}
