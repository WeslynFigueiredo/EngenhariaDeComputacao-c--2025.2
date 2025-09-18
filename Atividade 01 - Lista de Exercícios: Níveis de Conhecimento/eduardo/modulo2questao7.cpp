#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int num = 1;
  int soma = 0;
  while(num <= 50){
  	soma = soma + num;
  	num++;
    cout << "A soma atual é: " << soma << endl;
  }

return 0;
}
