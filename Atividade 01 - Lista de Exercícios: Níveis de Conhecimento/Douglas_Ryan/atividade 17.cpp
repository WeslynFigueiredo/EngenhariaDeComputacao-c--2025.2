#include <iostream> 

int main() {
    int numero; 

    std::cout << "Digite um numero inteiro positivo: "; 
    std::cin >> numero; 

    std::cout << "Os divisores de " << numero << " sao: "; 

    
    for (int i = 1; i <= numero; ++i) { 
        if (numero % i == 0) { 
            std::cout << i << " "; 
        }
    }
    std::cout << std::endl; 
    return 0; 
}