#include <iostream>
using namespace std;

void calcularMedia() {
    double soma = 0;
    int contador = 0;
    
    while (true) {
        double numero;
        cout << "Digite um número (ou um valor negativo para parar): ";
        cin >> numero;
        
        if (numero < 0) {
            break;
        }
        
        soma += numero;
        contador++;
    }
    
    if (contador > 0) {
        double media = soma / contador;
        cout << "A média dos números digitados é: " << media << endl;
        cout << "A quantidade de números digitados foi: " << contador << endl;
    } else {
        cout << "Nenhum número válido foi digitado." << endl;
    }
}

int main() {
    calcularMedia();
    return 0;
}
