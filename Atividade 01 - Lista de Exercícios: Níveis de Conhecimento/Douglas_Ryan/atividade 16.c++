#include <iostream>

int main() {
    double numero;
    double soma = 0.0;
    int contador = 0;

    std::cout << "Digite os numeros para calcular a media." << std::endl;
    std::cout << "Insira um valor negativo para finalizar." << std::endl;

   
    while (true) {
        std::cout << "Digite um numero: ";
        std::cin >> numero;

        
        if (numero < 0) {
            break; 
        }

        
        soma += numero;
        contador++;
    }

    
    if (contador > 0) {
        double media = soma / contador;
        std::cout << "\n--- Resultado ---" << std::endl;
        std::cout << "Quantidade de numeros digitados: " << contador << std::endl;
        std::cout << "Media dos numeros: " << media << std::endl;
    } else {
        std::cout << "\nNenhum numero positivo foi digitado." << std::endl;
    }

    return 0;
}