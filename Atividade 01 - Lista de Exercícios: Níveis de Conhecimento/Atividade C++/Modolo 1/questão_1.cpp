// Para usar o cin e cout
#include <iostream>
using namespace std;

int main(){
    int numero_escolhido;
    cout << "Escolha um numero";
    cin >> numero_escolhido;
    int resto_div = numero_escolhido % 2;
    if(resto_div==0){
        cout << "O numero"<< numero_escolhido<< "é par";
    }
    else if(resto_div!=0){
        cout << "O numero"<<numero_escolhido<< "é impar";
    }
    return 0;
}

//se o numero escolhido for 0 = par 
//se sobra 1 = impar