#include <iostream>
using namespace std;

int main() {
  int numero;
  
  cout << "digite um numero inteiro" << endl;
  cin >> numero;
  
  if (numero <= 0) {
      
      cout << "por favor, digite um numero inteiro maior que zero!!";
      return 0;
  }
    
      cout << "Os divisores de " << numero << " são : " << endl;
      
      for (int i = 1; i <= numero; i++) {
          if (numero % i == 0) {
              cout << i << " ";
          }
      }
      
    return 0;
}
