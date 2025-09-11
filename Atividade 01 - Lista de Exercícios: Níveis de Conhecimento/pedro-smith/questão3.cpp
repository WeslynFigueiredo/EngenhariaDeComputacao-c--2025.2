#include <iostream>

int main() {
    int numero1;
    int numero2;
    std::cout << "Digite um numero";
    std::cin >> numero1;
    std::cout << "Digite outro numero";
    std::cin >> numero2;
    if (numero1 > numero2) {
    	std::cout << numero1 << "ele e maior" << std::endl;
	}else if (numero1 == numero2) {
		std::cout << numero1 << "eles sao iguais" << std::endl;
	}
	else {
		std::cout << numero1 << "ele e menor" << std::endl;
	}
    return 0; 
}
