#include <iostream>
using namespace std;

int main() {
    int contador = 1; 
    int soma = 0;    

    while (contador <= 50) {
        soma += contador;  
        cout << "Após adicionar " << contador << ", a soma é: " << soma << endl;
        contador++;
    }

    cout << "Soma final de 1 a 50: " << soma << endl;

    return 0;
}
