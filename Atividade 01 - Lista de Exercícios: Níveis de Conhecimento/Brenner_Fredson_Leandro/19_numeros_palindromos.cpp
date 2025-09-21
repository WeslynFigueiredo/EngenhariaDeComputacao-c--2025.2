#include <iostream>
using namespace std;

int main() {
  int numero, ref1, ref2;
  
  cout << "Digite um numero inteiro: " << endl;
  cin >> numero;
  
  ref1 = abs(numero);
  int temp = ref1;
  
  while (temp > 0) {
      
      int digito = temp % 10;
        ref2 = ref2 * 10 + digito;
        temp /= 10;
  }
  if (ref2 == ref1) {
        cout << numero << " é um número palíndromo." << endl;
        
    } else {
        cout << numero << " não é um número palíndromo." << endl;
    }
    
    return 0;
}
