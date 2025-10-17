#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Pares até 20: Crie um programa que imprima os números pares de 1 a 20.
	int num = 1; 
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"---------------- <<Pares ate 20>> --------------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	while(num <= 20){
		if (num% 2 == 0){
			cout<<num<< endl;
		}
		num++;
	}
		
	return 0;
}
