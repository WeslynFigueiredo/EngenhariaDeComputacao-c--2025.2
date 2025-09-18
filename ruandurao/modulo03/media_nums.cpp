#include <iostream>
using namespace std;

int main(){
    float num = 0, total = 0;
    int div = 0;
    cout << "--- MEDIA DE N NUMEROS ---\n";
    cout << "| Aviso: ao inserir numero negativo, o programa para.\n";

    while(true){
        cout << "Insira um numero: "; cin >> num;
        if(num < 0){
            break;
        }
        total += num;
        div++;
    }

    cout << "A soma de todos os numeros e dividos por " << div << " e: " << (total/div);

    return 0;
}