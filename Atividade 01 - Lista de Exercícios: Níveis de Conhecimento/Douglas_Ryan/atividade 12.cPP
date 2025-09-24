#include <iostream> 

int main() {
    int numero; 
    int maior_numero; 

    
    std::cout << "Digite o 1º número: ";
    std::cin >> numero;
    maior_numero = numero;

    
    for (int i = 2; i <= 5; ++i) {
        std::cout << "Digite o " << i << "º número: ";
        std::cin >> numero; 

        
        if (numero > maior_numero) {
            maior_numero = numero;
        }
    }

   
    std::cout << "O maior número digitado é: " << maior_numero << std::endl;

    return 0; 
}
