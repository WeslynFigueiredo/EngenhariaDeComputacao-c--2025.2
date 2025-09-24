#include <iostream> 
int main() {
    int numero; 
    int soma = 0; 

    std::cout << "Digite os números (digite 0 para parar):" << std::endl; 

    
    while (true) {
        std::cin >> numero;

        
        if (numero == 0) {
            break;
        }

        soma = soma + numero;
    }

    std::cout << "A soma de todos os números digitados (exceto o 0) é: " << soma << std::endl; 

    return 0; 
}