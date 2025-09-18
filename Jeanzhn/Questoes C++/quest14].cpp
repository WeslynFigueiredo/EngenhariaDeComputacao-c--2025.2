#include <iostream>
#include <string>
using namespace std;

int main (){
	string frase;
	char a,e,i,o,u;
	cout << "Digite uma frase:" << endl;
	getline(cin, frase);
	int qtdVogais=0;
	while (true){
		int i = 0;
		while(i <= frase.size()+1){
			if (frase[i] == a||frase[i] == e||frase[i] == i||frase[i] == o||frase[i] == u){
				qtdVogais++;
			}
		i++;
		}break;
	}
	cout<<"o Total de vogais foi: " <<qtdVogais<<endl;
}
