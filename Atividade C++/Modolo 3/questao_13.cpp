// Jogo de Adivinhação: Crie um algoritmo para um jogo de adivinhação.
// O programa deve "escolher" um número secreto (por exemplo, 42). O usuário tenta adivinhar.
// O programa deve dar dicas ("Maior" ou "Menor") a cada tentativa, até que o usuário acerte.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int secret_number = (rand() % 100)+1;
    int numero_adivinha;
    cout << "Adivinhe o numero: ";
    do
    {
        cin >> numero_adivinha;
        if (numero_adivinha < secret_number)
        {
            cout << "o numero secreto e maior" << endl;
        }
        else if (numero_adivinha > secret_number)
        {
            cout << "o numero secreto e menor" << endl;
        }
    } while (numero_adivinha != secret_number);
    cout << "voce acertou é o numero: "<<secret_number << endl;
    return 0;
}
