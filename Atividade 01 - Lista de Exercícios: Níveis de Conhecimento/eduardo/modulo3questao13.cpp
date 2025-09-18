#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
  srand(time(0));
  int numaleatorio = rand() % 43;
  int resposta;
  
   	cout << "Boas-vindas!" << endl;
  	cout << "Advinhe o número: " << endl;
  	cin >> resposta;
  	
  	while(resposta != numaleatorio){
  		if(resposta > numaleatorio){
  			cout << "Sua resposta é maior que o número, tente de novo!" << endl;
  			cin >> resposta;
		  }
		else if (resposta < numaleatorio){
			cout << "Sua resposta é menor que o número, tente de novo!" << endl;
			cin >> resposta;
		}
	  }
	  
	cout << "Você acertou, parabéns!" << endl;
  	
  	return 0;
  }

