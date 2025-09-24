#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Leitura até Zero: Faça um programa que peça ao usuário para digitar números.
	//O programa deve parar quando o usuário digitar o número 0. Ao final, imprima a soma de todos os números digitados (excluindo o 0)
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
