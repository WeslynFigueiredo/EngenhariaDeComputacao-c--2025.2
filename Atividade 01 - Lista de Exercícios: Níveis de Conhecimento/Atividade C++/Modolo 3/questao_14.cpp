//Contador de Vogais: Escreva um programa que leia uma frase e 
//conte quantas vogais ('a', 'e', ​​'i', 'o', 'u') existem nela.

#include <iostream>
#include <string>

using namespace std;

int main (){
    string frase_digitada;
    int contador_letras=0;

    cout << "Digite sua frase: ";
    getline(cin, frase_digitada);

    for (char c: frase_digitada){
        c = tolower(c);

        if (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'){
            contador_letras++;
        }
    }
    cout << "Esta frase tem "<< contador_letras<< " vogais."<< endl;
    return 0;
}