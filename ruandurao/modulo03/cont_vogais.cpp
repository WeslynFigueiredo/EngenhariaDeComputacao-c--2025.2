#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string frase;
    cout << "--- CONTADOR DE VOGAIS ---\n";
    cout << "Insira uma frase curta: "; getline(cin, frase);

    //Manipular frase (deixar minusculo)
    transform(frase.begin(), frase.end(), frase.begin(), ::tolower);

    //Parte principal: validar cada letra = vogal.
    int contVogais = 0;
    int count = frase.length();
    while(count != -1){
        if(frase[count] == 'a' || frase[count] == 'e' || frase[count] == 'i' || frase[count] == 'o' || frase[count] == 'u'){
            contVogais++;
        }
        count--;
    }
    
    //Print a quant. de vogais
    cout << "Numero de vogais: " << contVogais;

    return 0;
}