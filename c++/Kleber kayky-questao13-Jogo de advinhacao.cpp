#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	srand(time(0));
	int numS = rand() % 100 + 1;
	
	int tent;
	bool acerto = false;
	
	cout << "/=/=/=/=/= Acerte ou Caia /=/=/=/=/="<< endl;
	cout << "Objetivo: Tente advinhar o numero entre 1 a 100!"<< endl;
	
	while(!acerto){
		cout << "Faca sua fezinha: ";
		cin >> tent;
		
		if (tent == numS){
			cout << "Parabens! Voce acertou!"<< endl;
			acerto = true;
		} else if (tent < numS){
			cout<<"Seu numero foi menor do que o sorteado!" << endl;
		} else {
			cout<<"Seu numero foi maior que o sorteado!"<< endl;
		}
	}
	return 0;
}
