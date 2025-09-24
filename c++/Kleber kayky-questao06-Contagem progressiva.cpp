#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Contagem Progressiva: Escreva um programa que imprima todos os números de 1 a 100 usando um loop 
	int num = 1; 
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"--------- <<MEGA CONTAGEM PROGRESSIVA>> --------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	while (num < 101){
		cout<< num<<endl;
		num ++;
	}
	return 0;
}
