//Leitura até Zero: Faça um programa que peça ao usuário para digitar números.
//O programa deve parar quando o usuário digitar o número 0. 
//Ao final, imprima a soma de todos os números digitados (excluindo o 0).
#include <iostream>
using namespace std;

int main(){
    int numero , soma = 0;

    cout << "Digite numeros( digite 0 para parar): "<< endl;
    do { // executa esta linha uma vez e para ao clicar 0
        cin >> numero;
        
        if (numero != 0){
            soma +=numero;
        }
    }while (numero != 0);
    cout <<"resultado: " << soma << endl;
    return 0;
}