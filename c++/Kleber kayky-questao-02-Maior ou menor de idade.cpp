#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
// Maior ou Menor de Idade: Desenvolva um algoritmo que peça a idade do usuário. Se a idade for 18 ou mais, imprima "Você é maior de idade".
// Caso contrário, imprima "Você é menor de idade".

    int idade;
 
	cout<<"------------------------------------------------"<< endl;
	cout<<"------------ <<De maior ou De menor>> ----------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	cout<<"Qual e sua idade? "<<endl;
	cin>> idade;
	if(idade <= 17){
		cout<<"Voce e menor de idade!"<<endl;
	} else {
		cout<<"Voce e maior de idade, parabens ja pode ser preso AAAHAHAHHAHAHA"<<endl;
	}
	return 0;
}
