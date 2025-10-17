#include <iostream> 

int main() {
    int numero; 
    int i = 1;  

   
    std::cout << "Digite um número para ver a sua tabuada: ";
    std::cin >> numero; 

    std::cout << "Tabuada do " << numero << ":" << std::endl;

    
    while (i <= 10) {
        
        std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
        i++; 
    }

    return 0;
}