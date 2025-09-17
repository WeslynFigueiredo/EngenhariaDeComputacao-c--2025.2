//Cálculo de Média de N Números: Desenvolva um algoritmo que recebe uma quantidade 
//indeterminada de números e calcula a média deles. 
//O programa deve parar a leitura quando o usuário digita um valor negativo. 
//Ao final, imprima a mídia e a quantidade de números digitados.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double numero;
    int contador = 0;
    double soma = 0.0;
    
    cout << "Digite numeros (negativo para parar):" << endl;
    while (true) {
        cout << "Digite o " << (contador + 1) << "º numero: ";
        cin >> numero;
        if (numero < 0) {
            break;
        }
        soma += numero;
        contador++;
    }
    if (contador > 0) {
        double media = soma / contador;
        cout << fixed << setprecision(2);
        cout << "Quantidade de numeros digitados: " << contador << endl;
        cout << "Soma total: " << soma << endl;
        cout << "Media: " << media << endl;
    } else {
        cout << "\nNenhum numero valido foi digitado!" << endl;
    }
    
    return 0;
}