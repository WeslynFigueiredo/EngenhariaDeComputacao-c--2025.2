#include <iostream>
#include <vector>

int main() {
    std::vector<float> notas; 
    float nota;
    float somaNotas = 0.0f; 

    std::cout << "Insira as notas (insira um número negativo para finalizar):" << std::endl;

   
    while (true) {
        std::cin >> nota;
        if (nota < 0) { 
            break;
        }
        notas.push_back(nota); 
        somaNotas += nota;     
    }

    
    if (!notas.empty()) {
        float media = somaNotas / notas.size();
        std::cout << "A média das notas é: " << media << std::endl;
    } else {
        std::cout << "Nenhuma nota foi inserida." << std::endl;
    }

    return 0;
}