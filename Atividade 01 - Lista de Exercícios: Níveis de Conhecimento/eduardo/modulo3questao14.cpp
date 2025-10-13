#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
  int i = 0;
  int contadorvogais = 0;
  string frase;
  
  cout << "Digite sua frase: ";
  getline(cin, frase);
  
  while(i < frase.length()){
  	char c = tolower(frase[i]);
  	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
	  contadorvogais++;
	}
	i++;
  }
  
  cout << "O número de vogais é: " << contadorvogais << endl;
  
  
  	
  	return 0;
  }

