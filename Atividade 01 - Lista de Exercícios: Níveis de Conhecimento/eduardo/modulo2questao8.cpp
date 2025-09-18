#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int num = 0;
  int soma = 0;
  while(num <= 20){
  	num++;
  	if(num % 2 == 0){	  
  	cout << "O número " << num << "é par." << endl;
  	}
  }

return 0;
}
