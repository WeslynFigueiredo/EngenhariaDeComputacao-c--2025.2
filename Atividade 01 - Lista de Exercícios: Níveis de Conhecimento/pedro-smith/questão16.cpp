#include <iostream>
using namespace std;

void calcularMedia() {
    double soma = 0;
    int contador = 0;
    
    while (true) {
        double numero;
        cout << "Digite um n�mero (ou um valor negativo para parar): ";
        cin >> numero;
        
        if (numero < 0) {
            break;
        }
        
        soma += numero;
        contador++;
    }
    
    if (contador > 0) {
        double media = soma / contador;
        cout << "A m�dia dos n�meros digitados �: " << media << endl;
        cout << "A quantidade de n�meros digitados foi: " << contador << endl;
    } else {
        cout << "Nenhum n�mero v�lido foi digitado." << endl;
    }
}

int main() {
    calcularMedia();
    return 0;
}
