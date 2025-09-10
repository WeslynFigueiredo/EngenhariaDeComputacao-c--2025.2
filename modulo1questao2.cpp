#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int idade;

  std::cout << "Digite sua idade: ";
  std::cin >> idade;

  if(idade >= 18){
    std::cout << "Você é maior de idade";
} else {
    std::cout << "Você é menor de idade";
}

return 0;
}
  
