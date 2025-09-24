#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main (){
	//Maior Número da Sequência: Faça um algoritmo que leia uma sequência de 5 números e imprima o maior número digitado. 
	int i = 1;
	int numero , maior;
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"--------------- <<Maior numero>> ---------------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	cout<<"Digite o 1 numero: "<<endl;
	cin>>numero;
	maior = numero;
	
	while (i < 5){
		i++;
		cout<<"Digite o "<<i<<" numero: "<<endl;
		cin>>numero;
		if(numero > maior){
			maior = numero;
		}
	}
	cout <<"O maior numero digitado foi: "<< maior<< endl;
	return 0;
}
