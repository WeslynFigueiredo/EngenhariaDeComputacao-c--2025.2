#include <iostream>

int main() {
    int n; 
    int t1 = 0, t2 = 1; 
    int proximoTermo;
    
    std::cout << "Digite o número de termos da sequência de Fibonacci: ";
    std::cin >> n;

    std::cout << "Sequência de Fibonacci: ";

    
    if (n >= 1) {
        std::cout << t1;
    }
    
    if (n >= 2) {
        std::cout << ", " << t2;
    }

   
    for (int i = 3; i <= n; ++i) {
        proximoTermo = t1 + t2; 
        std::cout << ", " << proximoTermo; 

       
        t1 = t2;
        t2 = proximoTermo;
    }

    std::cout << std::endl; 
    return 0;
}