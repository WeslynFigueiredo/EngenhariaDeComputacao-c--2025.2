#include <iostream>

using namespace std;

int main (){
	//Maior de Dois Números: Escreva um programa que receba dois números e imprima o maior deles. Se forem iguais, imprima "Os números são iguais".
	
	int num1; 
	int num2;
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"--------------- <<QUAL E MAIOR?>> --------------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	cout<<"insira o primeiro numero: "<<endl;
	cin>>num1;
	
	cout<<"insira o segundo numero: "<<endl;
	cin>>num2;
	
	if (num1 < num2){
		cout<<num1<< " e menor que "<< num2<< endl;
	} else if (num1 > num2){
		cout<<num1 <<" e maior que "<< num2<< endl;
	} else {
		cout<<num1 <<" e igual a " << num2 << endl;
	}
	return 0;
}
