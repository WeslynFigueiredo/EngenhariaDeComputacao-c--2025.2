#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Par ou �mpar: Crie um programa que leia um n�mero inteiro e diga se ele � par ou �mpar.
	int num; 
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"----------- <<Impar ou Par Gameshow>> ----------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	cout<<"Insira um numero inteiro: "<< endl;
	cin >> num;
	if (num% 2 == 0){
		cout<<"o numero e par."<< endl;
	} else {
		cout<<"O numero e impar"<< endl;
	}
	return 0;
}
