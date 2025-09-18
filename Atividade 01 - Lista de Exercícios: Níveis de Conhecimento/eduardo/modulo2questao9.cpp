#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int digitouser;
  int somatotal;
  
  while(digitouser != 0){
  	  cout << "Boas-vindas!";
	  cout << "Insira um dígito: ";
 	  cin >> digitouser;
	  somatotal = somatotal + digitouser;
  }
  cout << "A soma total dos seus dígitos foi: " << somatotal << endl;
return 0;
}
