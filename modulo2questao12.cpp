#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int num[4];
  int i = 0;
  int maior = 0;
  
  while (i < 5){
  	cout << "Boas-vindas!";
  	cout << "Insira um número: ";
  	cin >> num[i];
  	i++;
  }
  
  maior = num[0];
  i = 0;
  
  while(i < 5){
  
  	if(maior <= num[i]){
  		maior = num[i];
  		i++;
	  }
  }   
	cout << "O maior número é: " << maior << endl;


return 0;
}
