#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Tabuada: Desenvolva um algoritmo que leia um n�mero e imprima a tabuada desse n�mero, de 1 a 10, usando um loop 
	int num; 
	int i = 0;
	int multi;
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"--------------- <<Mega Tabuada>> ---------------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	cout<<"Digite o numero da tabuada que voce deseja: "<< endl;
	cin>>num;
	
	cout<<"------------------------------------------------"<< endl;
	
	while (i <= 10){
		multi = num * i;
		cout<< num <<" x "<< i << " = " << multi << endl;
		i++;
	}
	return 0;
}
