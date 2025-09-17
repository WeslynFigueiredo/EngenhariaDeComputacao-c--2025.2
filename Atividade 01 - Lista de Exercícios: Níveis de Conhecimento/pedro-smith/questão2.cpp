#include <iostream>

int main() {
    int numero;
    std::cout << "Digite sua idade";
    std::cin >> numero;
    if (numero >= 18) {
    	std::cout << numero << "ele e maior de idade" << std::endl;
	} else {
		std::cout << numero << "ele e menor de idade" << std::endl;
	}
    return 0; 
}
