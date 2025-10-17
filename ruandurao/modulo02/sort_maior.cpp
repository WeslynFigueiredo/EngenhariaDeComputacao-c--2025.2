#include <iostream>
using namespace std;

int main(){
    int num[5], count = 0;
    cout << "--- VER QUAL NUMERO É MAIOR ---\n";
    while(count < 5){
        cout << "Insira o " << (count+1) << " numero: "; cin >> num[count];
        count++;
    }

    int maior = 0, cont = 0;
    while(cont < 5){
        if(maior < num[cont]){
            maior = num[cont];
        }
        cont++;
    }

    cout << "O maior numero é " << maior;

    return 0;
}