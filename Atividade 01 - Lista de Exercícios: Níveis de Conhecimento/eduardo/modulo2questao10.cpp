#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int numerotabuada = 1;
  int numerodigitado;
  	cout << "Boas-vindas!";
	  cout << "Insira um dígito: ";
	  cin >> numerodigitado;
	  cout << "A tabuada desse número é: " << endl;
  while(numerotabuada <=10){
  	  cout << numerodigitado << "X" << numerotabuada << "=" << numerodigitado*numerotabuada << endl;
  	  numerotabuada++;
  }

return 0;
}
