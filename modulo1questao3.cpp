#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int num1;
  int num2;

  cout << "Digite o primeiro número: ";
  cin >> num1;
  cout << "Digite o segundo número: ";
  cin >> num2;

  if(num1 > num2){
    cout << "O numero maior: " << num1 << std::endl;
} else if(num2 > num1) {
    cout << "O numero maior: " << num2 << std::endl;
} else{
	cout << "Os dois números são iguais.";

}

return 0;
}
  
