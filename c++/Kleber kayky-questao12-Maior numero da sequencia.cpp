#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main (){
	//Maior N�mero da Sequ�ncia: Fa�a um algoritmo que leia uma sequ�ncia de 5 n�meros e imprima o maior n�mero digitado. 
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
