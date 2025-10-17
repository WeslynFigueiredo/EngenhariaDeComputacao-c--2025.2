#include <iostream>

int main() { 
    int num1, num2; 

    std::cout << "Digite o primeiro número: "; 
    std::cin >> num1; 

    std::cout << "Digite o segundo número: "; 
    std::cin >> num2; 

    if (num1 > num2) {
        std::cout << "O maior número é: " << num1 << std::endl; 
    } else if (num1 < num2) { 
        std::cout << "O maior número é: " << num2 << std::endl;
    } else { 
        std::cout << "Os números são iguais" << std::endl; 
    }

    return 0; 
    
}