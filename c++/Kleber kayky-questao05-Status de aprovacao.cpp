#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	//Status de Aprovação: Faça um programa que leia três notas de um aluno (de 0 a 10). Calcule a média. Se a média for maior ou igual a 7, imprima "Aprovado".
	//Se for entre 5 e 6.9, imprima "Recuperação". Se for menor que 5, imprima "Reprovado".
	double nota1; 
	double nota2;
	double nota3;
	double soma;
	double media;
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"------------- <<AVA SO QUE MELHOR>> ------------"<< endl;
	cout<<"------------------------------------------------"<< endl;
	
	cout<<"Insira a primeira nota (0 a 10): "<< endl;
	cin >> nota1;
		cout<<"Insira a segunda nota(0 a 10): "<< endl;
	cin >> nota2;
		cout<<"Insira a terceira nota(0 a 10): "<< endl;
	cin >> nota3;
	
	soma = nota1 + nota2 + nota3;
	media = soma/3;
	
	if (media >= 7){
		cout<<"APPROVED."<< endl;
	} else if (media >= 5 & media <= 6.9){
		cout<<"Recuperacao"<<endl;
	}else if (media < 5) {
		cout<<"Reproado"<< endl;
	}
	return 0;
}
