#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Soma Cumulativa: Desenvolva um algoritmo que calcule a soma de todos os números de 1 a 50 usando
	int num = 1; 
	int contador = 1;
	int soma;
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"----------- <<SOMA JA (50)>> ----------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	while (contador <= 50 ){
		soma = soma + num++;
		contador++;
	}
	cout<<soma;
	return 0;
}
