#include <iostream>
#include <string>
using namespace std;

int main(){
    string num;
    int tam, soma = 0, count;
    cout << "--- SOMAR DIGITOS DE UM UNICO NUMERO ---\n";
    cout << "Insira um numero com mais de dois digitos: "; cin >> num;

    tam = num.length();
    count = tam;
    while(count > 0){
        if(tam < 2){
            soma = stoi(num);
            break;
        }
        soma += int(num[count-1]) - '0';
        count--;
    }

    cout << "A soma de todos numeros da: " << soma;

    return 0;
}