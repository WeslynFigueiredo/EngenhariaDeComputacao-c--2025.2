#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    string senha = "11";
    string nome = "teste";
    string senha1;
    string nome1;

    std::cout << "digite seu nome" << std::endl;
    std::cin >> nome1;

    std::cout << "difite sua senha" << std::endl;
    std::cin >> senha1;

    if (nome == nome1 && senha == senha1){
        std::cout << "login foi feito"<< std::endl;
    }
    else {
        
        cout << "Usuario ou senha incorreta." << endl;
    }

    return 0;
    
    
}