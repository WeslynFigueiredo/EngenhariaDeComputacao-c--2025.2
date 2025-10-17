#include <iostream>
using namespace std;

int main() {
  int n;
  
  cout << "Digite o número de termos da sequência de Fibonacci: " << endl;
  cin >> n;
  
  if (n <= 0) {
      cout << "por favor, escreva um numero positivo!!" << endl;
      return 1;
  }
  long long primeiro = 0, segundo = 1;
  
  cout << "Sequência de Fibonacci com " << n << " termos:" << endl;
  
  for (int i = 0; i < n; i++){
      cout << primeiro << " ";
      
      long long proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
  }
    return 0;
}
